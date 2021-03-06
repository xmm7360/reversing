rpc_unpack_table = {
    1: 'UtaMsSimOpenReq',
    2: 'UtaMsSimApduCmdReq',
    4: 'UtaMsSimApplicationReq',
    6: 'UtaMsSimDecodeFcp',
    0xD: 'UtaMsSimPbReadEntryReq',
    0xF: 'UtaMsSimGenPinReq',
    0x11: 'UtaMsSimModifyLockReq',
    0x16: 'UtaMsSimTkProactiveCommandRsp',
    0x17: 'UtaMsSimTkEnvelopeCommandReq',
    0x19: 'UtaMsSimTkTerminalProfileReadReq',
    0x1C: 'UtaMsSimTkRegisterHandler',
    0x1D: 'UtaMsSimTkDeregisterHandler',
    0x1F: 'UtaMsCpsSetModeReq',
    0x20: 'UtaMsCpsSetStackModeConfiguration',
    0x21: 'UtaMsCpsSetSimModeConfiguration',
    0x23: 'UtaMsCpsReadImei',
    0x24: 'UtaMsCallCsInit',
    0x25: 'UtaMsCbsInit',
    0x26: 'UtaMsSsInit',
    0x27: 'UtaMsSsSendUssdReq',
    0x28: 'UtaMsSsRespondUssd',
    0x29: 'UtaMsSsAbort',
    0x30: 'UtaMsSmsInit',
    0x31: 'UtaMsSmsSendReq',
    0x34: 'UtaMsSmsSetMemoryAvailableReq',
    0x36: 'UtaMsSmsIncomingSmsAck',
    0x38: 'UtaMsSmsSimMsgCountReq',
    0x3A: 'UtaMsCallPsInitialize',
    0x3B: 'UtaMsCallPsObtainPdpContextId',
    0x3C: 'UtaMsCallPsReleasePdpContextId',
    0x3D: 'UtaMsCallPsDefinePrimaryReq',
    0x3F: 'UtaMsCallPsUndefinePrimaryReq',
    0x41: 'UtaMsCallPsGetPrimaryReq',
    0x43: 'UtaMsCallPsSetAuthenticationReq',
    0x45: 'UtaMsCallPsSetDnsReq',
    0x47: 'UtaMsCallPsGetNegotiatedDnsReq',
    0x49: 'UtaMsCallPsGetNegIpAddrReq',
    0x4B: 'UtaMsCallPsActivateReq',
    0x4E: 'UtaMsCallPsDeactivateReq',
    0x51: 'UtaMsCallPsConnectReq',
    0x53: 'UtaMsNetOpen',
    0x54: 'UtaMsNetSetRadioSignalReporting',
    0x55: 'UtaMsNetSingleShotRadioSignalReportingReq',
    0x5C: 'UtaMsNetAttachReq',
    0x5D: 'UtaMsNetPsAttachReq',
    0x5E: 'UtaMsNetPsDetachReq',
    0x5F: 'UtaMsNetScanReq',
    0x60: 'UtaMsNetScanAbort',
    0x61: 'UtaMsNetPowerDownReq',
    0x62: 'UtaMsNetExtScanReq',
    0x6E: 'UtaMsNetSetFdConfigReq',
    0x71: 'UtaMsNetGetFdConfigReq',
    0x73: 'UtaMsNetConfigureNetworkModeReq',
    0x76: 'UtaMsNetRatModeStatusReq',
    0x79: 'UtaNvmRead',
    0x7A: 'UtaNvmWrite',
    0x7B: 'UtaNvmWriteCommit',
    0x7C: 'UtaSysGetInfo',
    0x7D: 'UtaRPCPSConnectSetupReq',
    0x7E: 'UtaRPCPsConnectToDatachannelReq',
    0x7F: 'UtaRPCPSConnectReleaseReq',
    0x80: 'UtaMsNetDcSetVoiceDomainPreferenceConfigReq',
    0x82: 'UtaMsCallCsSetupVoiceCallReq',
    0x88: 'UtaMsCallCsReleaseCallReq',
    0x8D: 'UtaMsCallCsAcceptCallReq',
    0x90: 'UtaMsCallCsSwapCallsReq',
    0x92: 'UtaMsCallCsHoldCallReq',
    0x94: 'UtaMsCallCsRetrieveCallReq',
    0x96: 'UtaMsCallCsSplitMptyReq',
    0x98: 'UtaMsCallCsJoinCallsReq',
    0x9A: 'UtaMsCallCsTransferCallsReq',
    0x9C: 'UtaMsCallCsStartDtmfReq',
    0x9E: 'UtaMsCallCsStopDtmfReq',
    0xA6: 'UtaMsCallCsSetUus1Info',
    0xA7: 'UtaMsCallCsSetTtyDeviceMode',
    0xA8: 'UtaMsCallCsGetTtyDeviceMode',
    0xAC: 'UtaMsCallMultimediaSetupCallReq',
    0xAD: 'UtaMsCallMultimediaUpdateCallReq',
    0xB0: 'UtaMsCpsSetSimModeReq',
    0xB2: 'UtaMsSsCallForwardReq',
    0xB4: 'UtaMsSsCallWaitingReq',
    0xB6: 'UtaMsSsCallBarringReq',
    0xB8: 'UtaMsSsIdentificationReq',
    0xBA: 'UtaMsSmsSetSendMoreMessagesStatus',
    0xBB: 'UtaMsSmsDataDownloadReq',
    0xBD: 'UtaMsSmsDataDownloadAck',
    0xBE: 'UtaMsCallPsGetNegQosReq',
    0xC0: 'UtaMsCallPsGetTftReq',
    0xC2: 'UtaMsCallPsSetPcoReq',
    0xC4: 'UtaMsCallPsGetNwPcoReq',
    0xC7: 'UtaMsCallPsNwActivateAcceptReq',
    0xC9: 'UtaMsCallPsNwActivateRejectReq',
    0xCD: 'UtaMsCallPsSetDataPrefReq',
    0xCF: 'UtaMsCbsStartReq',
    0xD0: 'UtaMsCbsStopReq',
    0xD3: 'UtaMsCbsSetMsgFilter',
    0xD4: 'UtaMsCbsGetMsgFilter',
    0xD6: 'UtaMsCbsEtwsConfigReq',
    0xD8: 'UtaMsCbsEtwsStartReq',
    0xDA: 'UtaMsCbsEtwsStopReq',
    0xDE: 'UtaMsCpsNvmWrite',
    0xDF: 'UtaMsCpsNvmRead',
    0xE0: 'UtaMsNetConfigureRxDiversityDarp',
    0xE2: 'UtaMsNetLdrGetApnParameterList',
    0xE3: 'UtaMsNetTimeInfoReadReq',
    0xE6: 'UtaMsNetSetCsgConfigReq',
    0xE7: 'UtaMsNetBandStatusReq',
    0xEC: 'UtaMsNetGetExtendedRadioSignalInfoReq',
    0xEF: 'UtaMsNetDetachReq',
    0xF1: 'UtaMsNetSelectGprsClassReq',
    0xF3: 'UtaMsNetGetCsgConfigReq',
    0xF4: 'UtaMsNetCsServiceNotificationAccept',
    0xF9: 'UtaMsNetSingleShotFdReq',
    0xFB: 'UtaMsSimPbLocationReq',
    0xFD: 'UtaMsSimPbReadGasEntryReq',
    0xFF: 'UtaMsSimPbWriteEntryReq',
    0x101: 'UtaMsSimPbGetMetaInformationReq',
    0x103: 'UtaMsSimPbUsimPbSelectReq',
    0x105: 'UtaMsSimPbGetFreeRecordsReq',
    0x10A: 'UtaMsSimCreateReadBinaryApdu',
    0x10B: 'UtaMsSimCreateUpdateBinaryApdu',
    0x10C: 'UtaMsSimAnalyseReadResult',
    0x10E: 'UtaMsSimSetFdnReq',
    0x110: 'SetApScreenState',
    0x111: 'UtaIoCtl',
    0x114: 'UtaIdcApMsgSetReq',
    0x115: 'UtaIdcApMsgGetReq',
    0x116: 'UtaIdcEnbleReq',
    0x119: 'UtaIdcCwsMsgSetReq',
    0x11A: 'UtaIdcCwsMsgGetReq',
    0x11C: 'UtaIdcSubscribeIndications',
    0x11D: 'UtaIdcUnsubscribeIndications',
    0x11F: 'UtaBootPrepareShutdownReq',
    0x120: 'UtaBootShutdownReq',
    0x121: 'UtaRfMaxTxPwrSet2g',
    0x122: 'UtaRfMaxTxPwrSet3g',
    0x123: 'UtaRfMaxTxPwrSet4g',
    0x128: 'UtaFreqInfoActivateReq',
    0x129: 'UtaFreqInfoGetFreqInfoReq',
    0x12A: 'UtaFreqInfoDeactivateReq',
    0x12B: 'UtaFreqInfoRegisterIndications',
    0x12C: 'UtaFreqInfoDeregisterIndications',
    0x12F: 'UtaModeSetReq',
    0x130: 'UtaNvmFlushSync',
    0x132: 'UtaProdRegisterGtiCallbackFunc',
    0x133: 'UtaProdGtiCmdReq',
    0x134: 'UtaCellTimeStampReq',
    0x136: 'UtaMsSsLcsInit',
    0x137: 'UtaMsSsLcsMoLocationReq',
    0x139: 'UtaMsSsLcsMtlrNotificationRsp',
    0x13C: 'UtaMsCpAssistanceDataInjectReq',
    0x13D: 'UtaMsCpResetAssistanceData',
    0x140: 'UtaMsCpPosMeasurementReq',
    0x142: 'UtaMsCpPosMeasurementAbortReq',
    0x144: 'UtaMsCpPosEnableMeasurementReport',
    0x145: 'UtaMsCpPosDisableMeasurementReport',
    0x146: 'UtaMsSimTkInit',
    0x148: 'UtaMsSimTkExecSmsPpRsp',
    0x14A: 'UtaMsSimTkExecSimInitiatedCallRsp',
    0x14C: 'UtaMsSimTkExecSsUssdRsp',
    0x14E: 'UtaMsSimTkExecDtmfRsp',
    0x150: 'UtaMsSimTkStopDtmfReq',
    0x152: 'UtaMsSimTkRefreshConfirmRsp',
    0x154: 'UtaMsSimTkRefreshFcnRsp',
    0x155: 'UtaMsSimTkControlReq',
    0x157: 'UtaMsSimTkTerminalProfileDownloadReq',
    0x15A: 'UtaMs3gpp2SmsSendReq',
    0x15C: 'UtaMs3gpp2SmsSubscribeIndications',
    0x15D: 'UtaMs3gpp2SmsUnsubscribeIndications',
    0x15E: 'RpcGetRemoteVerInfo',
    0x160: 'UtaMsMetricsRegisterHandler',
    0x161: 'UtaMsMetricsDeregisterHandler',
    0x162: 'UtaMsMetricsSetOptions',
    0x163: 'UtaMsMetricsTrigger',
    0x164: 'UtaMsEmbmsInit',
    0x165: 'UtaMsEmbmsSetServiceReq',
    0x166: 'UtaMsEmbmsMbsfnAreaConfigReq',
    0x167: 'UtaMsEmbmsSessionConfigReq',
    0x168: 'UtaMsEmbmsSetInterestedTMGIListReq',
    0x169: 'UtaMsEmbmsSetInterestedSAIFreqReq',
    0x176: 'UtaImsSubscribeIndications',
    0x177: 'UtaImsUnsubscribeIndications',
    0x178: 'UtaImsGetFrameworkState',
    0x179: 'UtaRtcGetDatetime',
    0x17A: 'UtaMsSimAnalyseSimApduResult',
    0x17B: 'UtaMsSimOpenChannelReq',
    0x17D: 'UtaMsSimCloseChannelReq',
    0x17F: 'UtaMsSimSetBdnReq',
    0x181: 'UtaMsSetSimStackMappingReq',
    0x183: 'UtaMsGetSimStackMappingReq',
    0x188: 'UtaMsNetSetRadioSignalReportingConfiguration',
    0x189: 'UtaPCIeEnumerationextTout',
    0x18A: 'UtaMsSimTkSetTerminalCapabilityReq',
    0x18C: 'UtaMsSimTkReadTerminalCapabilityReq',
    0x18E: 'CsiFccLockQueryReq',
    0x190: 'CsiFccLockGenChallengeReq',
    0x192: 'CsiFccLockVerChallengeReq',
    0x194: 'UtaSensorOpenReq',
    0x197: 'UtaSensorCloseExt',
    0x198: 'UtaSensorStartExt',
    0x199: 'UtaSensorSetAlarmParamExt',
    0x19A: 'UtaSensorSetSchedulerParamExt',
    0x19B: 'CsiSioIpFilterCntrlSetReq',
    0x19D: 'UtaMsAccCurrentFreqInfoReq',
    0x1A0: 'CsiTrcAtCmndReq',
    0x1A2: 'UtaMsSimApduCmdExtReq',
    0x1A4: 'UtaMsNetGetPlmnNameInfoReq',
    0x1A7: 'UtaMsNetGetCountryListReq',
    0x1A9: 'UtaMsNetExtConfigureNetworkModeReq',
    0x1AC: 'UtaMsNetExtBandStatusReq',
    0x1AF: 'UtaMsCallPsAttachApnConfigReq',
    0x1B1: 'CsiMsCallPsInitialize',
    0x1B2: 'UtaAudioEnableSource',
    0x1B3: 'UtaAudioDisableSource',
    0x1B4: 'UtaAudioConfigureDestinationExt',
    0x1B5: 'UtaAudioSetDestinationsForSource',
    0x1B6: 'UtaAudioSetVolumeForSource',
    0x1B7: 'UtaAudioSetMuteForSourceExt',
    0x1B8: 'UtaAudioSetVolumeForDestination',
    0x1B9: 'UtaAudioSetMuteForDestinationExt',
    0x1BA: 'UtaAudioConfigureSourceExt',
    0x1BB: 'UtaAudioSetDestinationsForSourceExt',
    0x1BC: 'UtaRPCScreenControlReq',
    0x1BD: 'UtaMsCallPsReadContextStatusReq',
    0x1BF: 'CsiMsSimAccessGetSimStateInfoReq',
    0x1C1: 'CsiMsNetGetRegistrationInfoReq',
    0x1C3: 'CsiSioIpFilterNewCntrlSetReq',
    0x1C5: 'CsiMsNetLdrGetApnPlmnParameterListReq',
    0x1c8: 'RPCGetAPIParamChangedBitmap',
}
