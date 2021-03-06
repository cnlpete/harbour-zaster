/*
    Copyright (C) 2018-19 Sebastian J. Wolf

    This file is part of Zaster Banker.

    Zaster Banker is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Zaster Banker is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Zaster Banker. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MESSAGECONSTANTS_H
#define MESSAGECONSTANTS_H

// Placeholder message length, that will be changed when we completed the whole message
const char MESSAGE_LENGTH_PLACEHOLDER[] = "000000000000";
// HBCI-Version - always fixed version 3.0, see Formals, page 15
const char FINTS_VERSION[] = "300";
const char SIGNATURE_CONTROL_REFERENCE[] = "4242";
const char SYSTEM_IDENTIFICATION[] = "0";
const char SEGMENT_MESSAGE_HEADER_ID[] = "HNHBK";
const char SEGMENT_MESSAGE_HEADER_VERSION[] = "3";
const char SEGMENT_IDENTIFICATION_ID[] = "HKIDN";
const char SEGMENT_IDENTIFICATION_VERSION[] = "2";
const char SEGMENT_PROCESS_PREPARATION_ID[] = "HKVVB";
const char SEGMENT_PROCESS_PREPARATION_VERSION[] = "3";
const char SEGMENT_SYNCHRONIZATION_ID[] = "HKSYN";
const char SEGMENT_SYNCHRONIZATION_VERSION[] = "3";
const char SEGMENT_SYNCHRONIZATION_RESPONSE_ID[] = "HISYN";
const char SEGMENT_SYNCHRONIZATION_RESPONSE_VERSION[] = "4";
const char SEGMENT_MESSAGE_TERMINATION_ID[] = "HNHBS";
const char SEGMENT_MESSAGE_TERMINATION_VERSION[] = "1";
const char SEGMENT_MESSAGE_FEEDBACK_ID[] = "HIRMG";
const char SEGMENT_MESSAGE_FEEDBACK_VERSION[] = "2";
const char SEGMENT_SEGMENT_FEEDBACK_ID[] = "HIRMS";
const char SEGMENT_SEGMENT_FEEDBACK_VERSION[] = "2";
const char SEGMENT_BANK_PARAMETER_ID[] = "HIBPA";
const char SEGMENT_BANK_PARAMETER_VERSION[] = "3";
const char SEGMENT_SECURITY_PROCEDURE_ID[] = "HISHV";
const char SEGMENT_SECURITY_PROCEDURE_VERSION[] = "3";
const char SEGMENT_PIN_TAN_INFORMATION_ID[] = "HIPINS";
const char SEGMENT_PIN_TAN_INFORMATION_VERSION[] = "1";
const char SEGMENT_TAN_TWO_STEP_INFORMATION_ID[] = "HITANS";
const char SEGMENT_TAN_TWO_STEP_INFORMATION_VERSION[] = "6";
const char SEGMENT_TAN_TWO_STEP_REQUEST_ID[] = "HKTAN";
const char SEGMENT_TAN_TWO_STEP_REQUEST_VERSION[] = "6";
const char SEGMENT_DIALOG_END_ID[] = "HKEND";
const char SEGMENT_DIALOG_END_VERSION[] = "1";
const char SEGMENT_SIGNATURE_HEADER_ID[] = "HNSHK";
const char SEGMENT_SIGNATURE_HEADER_VERSION[] = "4";
const char SEGMENT_SIGNATURE_FOOTER_ID[] = "HNSHA";
const char SEGMENT_SIGNATURE_FOOTER_VERSION[] = "2";
const char SEGMENT_ENCRYPTION_HEADER_ID[] = "HNVSK";
const char SEGMENT_ENCRYPTION_HEADER_VERSION[] = "3";
const char SEGMENT_ENCRYPTED_DATA_ID[] = "HNVSD";
const char SEGMENT_ENCRYPTED_DATA_VERSION[] = "1";
const char SEGMENT_USER_PARAMETER_DATA_ID[] = "HIUPA";
const char SEGMENT_USER_PARAMETER_DATA_VERSION[] = "4";
const char SEGMENT_ACCOUNT_INFORMATION_ID[] = "HIUPD";
const char SEGMENT_ACCOUNT_INFORMATION_VERSION[] = "6";
const char SEGMENT_ACCOUNT_BALANCE_ID[] = "HKSAL";
const int  SEGMENT_ACCOUNT_BALANCE_VERSION = 4;
const char SEGMENT_ACCOUNT_BALANCE_RESPONSE_ID[] = "HISAL";
const char SEGMENT_ACCOUNT_BALANCE_PARAMETERS_ID[] = "HISALS";
const char SEGMENT_TRANSACTIONS_REQUEST_ID[] = "HKKAZ";
const int  SEGMENT_TRANSACTIONS_REQUEST_VERSION = 4;
const char SEGMENT_TRANSACTIONS_RESPONSE_ID[] = "HIKAZ";
const char SEGMENT_TRANSACTIONS_PARAMETERS_ID[] = "HIKAZS";
const char SEGMENT_PORTFOLIO_INFO_REQUEST_ID[] = "HKWPD";
const int  SEGMENT_PORTFOLIO_INFO_REQUEST_VERSION = 4;
const char SEGMENT_PORTFOLIO_INFO_RESPONSE_ID[] = "HIWPD";
const char SEGMENT_PORTFOLIO_INFO_PARAMETERS_ID[] = "HIWPDS";
#endif // MESSAGECONSTANTS_H
