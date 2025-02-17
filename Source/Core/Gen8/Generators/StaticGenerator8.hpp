/*
 * This file is part of PokéFinder
 * Copyright (C) 2017-2023 by Admiral_Fish, bumba, and EzPzStreamz
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

#ifndef STATICGENERATOR8_HPP
#define STATICGENERATOR8_HPP

#include <Core/Gen8/Profile8.hpp>
#include <Core/Parents/Filters/StateFilter.hpp>
#include <Core/Parents/Generators/StaticGenerator.hpp>

class GeneratorState;
class StaticTemplate;

/**
 * @brief Static encounter generator for Gen8
 */
class StaticGenerator8 : public StaticGenerator<Profile8, StateFilter>
{
public:
    /**
     * @brief Construct a new StaticGenerator8 object
     *
     * @param initialAdvances Initial number of advances
     * @param maxAdvances Maximum number of advances
     * @param delay Number of advances to offset
     * @param lead Encounter lead
     * @param profile Profile Information
     * @param filter State filter
     */
    StaticGenerator8(u32 initialAdvances, u32 maxAdvances, u32 delay, Lead lead, const Profile8 &profile, const StateFilter &filter);

    /**
     * @brief Generates states for the \p staticTemplate
     *
     * @param seed0 Upper half of PRNG state
     * @param seed1 Lower half of PRNG state
     * @param staticTemplate Pokemon template
     *
     * @return Vector of computed states
     */
    std::vector<GeneratorState> generate(u64 seed0, u64 seed1, const StaticTemplate *staticTemplate) const;

    /**
     * @brief Generates states for the roamers \p staticTemplate
     *
     * @param seed0 Upper half of PRNG state
     * @param seed1 Lower half of PRNG state
     * @param staticTemplate Pokemon template
     *
     * @return Vector of computed states
     */
    std::vector<GeneratorState> generateRoamer(u64 seed0, u64 seed1, const StaticTemplate *staticTemplate) const;
};

#endif // STATICGENERATOR8_HPP
