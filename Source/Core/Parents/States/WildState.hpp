/*
 * This file is part of PokéFinder
 * Copyright (C) 2017-2022 by Admiral_Fish, bumba, and EzPzStreamz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef WILDSTATE_HPP
#define WILDSTATE_HPP

#include <Core/Parents/States/State.hpp>

class WildState : public State
{
public:
    WildState() = default;

    explicit WildState(u64 advance) : State(advance)
    {
    }

    u8 getEncounterSlot() const
    {
        return encounterSlot;
    }

    u8 getItem() const
    {
        return item;
    }

protected:
    u8 encounterSlot;
    u8 item;
};

#endif // WILDSTATE_HPP
