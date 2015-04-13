/*
 * This file is part of Wireless Display Software for Linux OS
 *
 * Copyright (C) 2014 Intel Corporation.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#ifndef HEADERSCANNER_H
#define HEADERSCANNER_H

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

#include "scanner.h"
#include "parser.tab.hpp"

namespace wds {
namespace rtsp {

class HeaderScanner : public yyFlexLexer, public BaseLexer {
 public:
  HeaderScanner(std::istream *in)
  : yyFlexLexer(in),
    BaseLexer() {}

 private:
  int yylex() override;
};

}  // namespace rtsp
}  // namespace wds
#endif // HEADERSCANNER_H
