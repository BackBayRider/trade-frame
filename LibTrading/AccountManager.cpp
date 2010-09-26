/************************************************************************
 * Copyright(c) 2009, One Unified. All rights reserved.                 *
 *                                                                      *
 * This file is provided as is WITHOUT ANY WARRANTY                     *
 *  without even the implied warranty of                                *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                *
 *                                                                      *
 * This software may not be used nor distributed without proper license *
 * agreement.                                                           *
 *                                                                      *
 * See the file LICENSE.txt for redistribution information.             *
 ************************************************************************/

#include "StdAfx.h"

#include "AccountManager.h"

CAccountManager::CAccountManager(void) 
: OU_DB_INITIALIZE_STRUCTURES(AccountAdvisor, OU_DB_ACCOUNTADVISOR_RECORD_FIELDS),
  OU_DB_INITIALIZE_STRUCTURES(Account, OU_DB_ACCOUNT_RECORD_FIELDS)

{
}

CAccountManager::~CAccountManager(void) {
}
