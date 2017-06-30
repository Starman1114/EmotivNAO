/**
 * Emotiv SDK
 * Copyright (c) 2016 Emotiv Inc.
 *
 * This file is part of the Emotiv SDK.
 *
 * All the error codes that are returned by IEE_ functions are listed here.
 */

//! \file IedkErrorCode.h

#ifndef IEDK_ERROR_CODE_H
#define IEDK_ERROR_CODE_H

//! Default success value.
#define EDK_OK                              0x0000

//! An internal error occurred.
#define EDK_UNKNOWN_ERROR                   0x0001

//! Invalid Developer ID.
#define EDK_INVALID_DEV_ID_ERROR            0x0002

//! The buffer supplied to IEE_SetUserProfile() is not a valid, serialized EmoEngine profile.
#define EDK_INVALID_PROFILE_ARCHIVE         0x0101

//! Returned from IEE_EmoEngineEventGetUserId() if the event supplied contains a base profile,
//! and is not associated with specific user.
#define EDK_NO_USER_FOR_BASEPROFILE         0x0102

//! The EmoEngine is unable to acquire data for processing.
//! \sa IEE_EngineConnect
#define EDK_CANNOT_ACQUIRE_DATA             0x0200

//! The buffer supplied to the function is not large enough.
#define EDK_BUFFER_TOO_SMALL                0x0300

//! A parameter supplied to the function is out of range.
#define EDK_OUT_OF_RANGE                    0x0301

//! One of the parameters supplied to the function is invalid
#define EDK_INVALID_PARAMETER               0x0302

//! The parameter is currently locked by the detection and cannot be modified at this time.
#define EDK_PARAMETER_LOCKED                0x0303

//! The supplied MentalCommand training action flag is invalid.
#define EDK_MC_INVALID_TRAINING_ACTION      0x0304

//! The supplied MentalCommand training control flag is invalid.
#define EDK_MC_INVALID_TRAINING_CONTROL     0x0305

//! The MentalCommand action bits vector is invalid.
#define EDK_MC_INVALID_ACTIVE_ACTION        0x0306

//! The MentalCommand action bits vector contains more action types than it is allowed.
#define EDK_MC_EXCESS_MAX_ACTIONS           0x0307

//! A trained signature is not currently available for use,
//! addition actions (including neutral) may be required.
#define EDK_FE_NO_SIG_AVAILABLE             0x0308

//! A filesystem error occurred.
#define EDK_FILESYSTEM_ERROR                0x0309

//! The user ID supplied to the function is invalid.
#define EDK_INVALID_USER_ID                 0x0400

//! The EDK needs to be initialized via IEE_EngineConnect() or IEE_EngineRemoteConnect().
#define EDK_EMOENGINE_UNINITIALIZED         0x0500

//! The connection with a remote instance of the EmoEngine made via EE_EngineRemoteConnect() has been lost.
#define EDK_EMOENGINE_DISCONNECTED          0x0501

//! The API was unable to establish a connection with a remote instance of the EmoEngine.
#define EDK_EMOENGINE_PROXY_ERROR           0x0502

//! There are no new EmoEngine events at this time.
#define EDK_NO_EVENT                        0x0600

//! The gyro is not calibrated. Please ask the user to stay still for at least 0.5 seconds.
#define EDK_GYRO_NOT_CALIBRATED             0x0700

//! Operation failure due to optimization.
#define EDK_OPTIMIZATION_IS_ON              0x0800

//! Reserved return value.
#define EDK_RESERVED1                       0x0900

#endif
