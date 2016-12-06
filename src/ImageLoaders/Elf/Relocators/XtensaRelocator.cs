﻿#region License
/* 
 * Copyright (C) 1999-2016 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using System;
using Reko.Core;

namespace Reko.ImageLoaders.Elf.Relocators
{
    public class XtensaRelocator : ElfRelocator
    {
        private ElfLoader32 elfLoader32;

        public XtensaRelocator(ElfLoader32 elfLoader32)
        {
            this.elfLoader32 = elfLoader32;
        }

        public override void Relocate(Program program)
        {
            return;
        }

        public override string RelocationTypeToString(uint type)
        {
            throw new NotImplementedException();
        }
    }
}