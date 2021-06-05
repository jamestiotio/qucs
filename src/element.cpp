/***************************************************************************
    copyright            : (C) 2003 by Michael Margraf
                               2018, 2020 Felix Salfelder
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "element.h"
#include "component.h" // BUG
#include "element_list.h"
/*--------------------------------------------------------------------------*/
namespace qucs {
/*--------------------------------------------------------------------------*/
Element::Element() : _position(0, 0), _owner(nullptr)
{
  // Type = isDummyElement; // BUG
  x1 = y1 = 0; // x2 = y2 = 0; // really?
//  set_label(name());
}
/*--------------------------------------------------------------------------*/
Element::Element(Element const& e)
 : Object(e),
   _position(e._position),
   x1(e.x1), y1(e.y1), // x2(e.x2), y2(e.y2), // BUG diagram & whatever.
   _owner(nullptr) // sic.
{
}
/*--------------------------------------------------------------------------*/
void Element::set_dev_type(const std::string& New_Type)
{
	trace3("Element::set_dev_type", short_label(), dev_type(), New_Type);
  if (New_Type != dev_type()) {
    //throw Exception_Cant_Set_Type(dev_type(), New_Type);
  }else{
    // it matches -- ok.
  }
}
/*--------------------------------------------------------------------------*/
Element::~Element()
{
}
/*--------------------------------------------------------------------------*/
ElementList* Element::scope()
{
	if(!owner()){
		return &ElementList::card_list;
	}else if(auto o=dynamic_cast<Component*>(owner())){
		if(o->subckt()){
			return o->subckt();
//		}else if(o->makes_own_scope()){ untested();
		}else{
			return o->scope();
			return nullptr;
		}
	}else{ untested();
		return nullptr;
	}
}
/*--------------------------------------------------------------------------*/
std::string Element::param_value(index_t) const
{ untested();
	unreachable();
	return "not_reached_elt_pv";
}
/*--------------------------------------------------------------------------*/
std::string Element::param_name(index_t) const
{ untested();
	unreachable();
	return "not_reached_elt_pn";
}
/*--------------------------------------------------------------------------*/
void Element::set_param_by_index(index_t i, std::string const&)
{ untested();
	throw qucs::ExceptionCantFind(label(), "parameter " + std::to_string(i), label());
}
/*--------------------------------------------------------------------------*/
void Element::set_param_by_name(std::string const& name, std::string const&)
{ untested();
	throw qucs::ExceptionCantFind("parameter " + name, label());
}
/*--------------------------------------------------------------------------*/
std::string Element::param_value_by_name(std::string const& name) const
{ untested();
	throw qucs::ExceptionCantFind("parameter " + name, label());
}
/*--------------------------------------------------------------------------*/
pos_t Element::center() const
{
	return pos_t(cx(), cy());
}
/*--------------------------------------------------------------------------*/
// borrowed/modified from e_card.h
const Element* Element::find_looking_out(const std::string& name) const
{
	trace3("Element::find_looking_out", name, label(), owner());
	try {
		return find_in_parent_scope(name);
	}catch (qucs::ExceptionCantFind&) {
		if (auto o=dynamic_cast<Element const*>(owner())) {
			trace3("find_looking_out2", name, label(), o->label());
			return o->find_looking_out(name);
		// }else if (makes_own_scope()) { untested();
		// 	// probably a subckt or "module"
		// 	CARD_LIST::const_iterator i = CARD_LIST::card_list.find_(name);
		// 	if (i != CARD_LIST::card_list.end()) { untested();
		// 		return *i;
		// 	}else{ untested();
		// 		throw;
		// 	}
		}else{
			throw;
		}
	}
}
/*--------------------------------------------------------------------------*/
// borrowed/modified from e_card.h
const Element* Element::find_in_parent_scope(const std::string& name)const
{
  assert(name != "");
  auto const* p_scope = (scope()->parent()) ? scope()->parent() : scope();

  if(!p_scope){
	  // unreachable(); happens in some lib files
	  trace2("no scope", name, label());
	  throw qucs::ExceptionCantFind(name, label());
  }else{
  }

  auto i = p_scope->find_(name);
  if (i == p_scope->end()) {
    throw qucs::ExceptionCantFind(name, label());
  }else{
  }
  return *i;

}
/*--------------------------------------------------------------------------*/
/* find_in_my_scope: find in same scope as myself
 * whatever is found will have the same owner as me.
 * capable of finding me.
 * throws exception if can't find.
 */
Element* Element::find_in_my_scope(std::string const& name)
{
  assert(name != "");
  assert(scope());

  ElementList::iterator i = scope()->find_(name);
  if (i == scope()->end()) {
    throw qucs::ExceptionCantFind(long_label(), name,
			      ((owner()) ? owner()->long_label() : "(root)"));
  }else{
  }
  return *i;
}
/*--------------------------------------------------------------------------*/
} // qucs
/*--------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------*/
