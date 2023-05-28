/**
 * Shadow Daemon -- Web Application Firewall
 *
 *   Copyright (C) 2014-2022 Hendrik Buchwald <hb@zecure.org>
 *
 * This file is part of Shadow Daemon. Shadow Daemon is free software: you can
 * redistribute it and/or modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation, version 2.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 * You must obey the GNU General Public License in all respects
 * for all of the code used other than OpenSSL.  If you modify
 * file(s) with this exception, you may extend this exception to your
 * version of the file(s), but you are not obligated to do so.  If you
 * do not wish to do so, delete this exception statement from your
 * version.  If you delete this exception statement from all source
 * files in the program, then also delete it here.
 */

#include "reply.h"

void swd::reply::set_status(const int& status) {
    status_ = status;
}

int swd::reply::get_status() const {
    return status_;
}

void swd::reply::set_message(const std::string& message) {
    message_ = message;
}

std::string swd::reply::get_message() const {
    return message_;
}

void swd::reply::set_threats(const std::vector<std::string>& threats) {
    threats_ = threats;
}

std::vector<std::string> swd::reply::get_threats() const {
    return threats_;
}

void swd::reply::set_content(const std::string& content) {
    content_ = content;
}

std::string swd::reply::get_content() const {
    return content_;
}

std::vector<boost::asio::const_buffer> swd::reply::to_buffers() const {
    std::vector<boost::asio::const_buffer> buffers;
    buffers.push_back(boost::asio::buffer(content_));
    return buffers;
}
