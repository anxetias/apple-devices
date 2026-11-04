// rea decompile_all
// name: _AMRestoreErrorTranslation
// address: 0xe6d35
// body: available
// range: 0xe6d35-0xe76f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe761b to 0x2a97b6 _CFRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xe765d to 0x2a98dc _CFStringCreateWithFormat (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMRestoreErrorTranslation(int param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  
  if (param_1 < 0x3e9) {
    switch(param_1) {
    default:
      goto switchD_000e6d5f_caseD_0;
    case 1:
      pcVar2 = &cf_Badargument;
      break;
    case 2:
      pcVar2 = &cf_Unabletoconnecttodevice;
      break;
    case 3:
      pcVar2 = &cf_Deviceisnotinrestoremode;
      break;
    case 4:
      pcVar2 = &cf_Devicesoftwareisunsupported;
      break;
    case 5:
      pcVar2 = &cf_Devicehardwareisunsupported;
      break;
    case 6:
      pcVar2 = &cf_Operationfailed;
      break;
    case 7:
      pcVar2 = &cf_DidnotreceiveanexpectedACK;
      break;
    case 8:
      pcVar2 = &cf_Devicecouldnothandlerequest;
      break;
    case 9:
      pcVar2 = &cf_Communicationerror_possiblyUSBdisconnection;
      break;
    case 10:
      pcVar2 = &cf_Protocolerror;
      break;
    case 0xb:
      pcVar2 = &cf_Fileerror;
      break;
    case 0xc:
      pcVar2 = &cf_Unabletoopenfile;
      break;
    case 0xd:
      pcVar2 = &cf_IOerror;
      break;
    case 0xe:
      pcVar2 = &cf_ASRerror;
      break;
    case 0xf:
      pcVar2 = &cf_BOMerror;
      break;
    case 0x10:
      pcVar2 = &cf_Permissiondenied;
      break;
    case 0x11:
      pcVar2 = &cf_Pathdoesnotexist;
      break;
    case 0x12:
      pcVar2 = &cf_Memoryallocationerror;
      break;
    case 0x13:
      pcVar2 = &cf_Unabletoparseplist;
      break;
    case 0x14:
      pcVar2 = &cf_CannotrestoreolderepochwithoutusingDFU;
      break;
    case 0x15:
      pcVar2 = &cf_Commandexecutionfailedondevice;
      break;
    case 0x16:
      pcVar2 = &cf_Notimplementederror;
      break;
    case 0x17:
      pcVar2 = &cf_Radioerror;
      break;
    case 0x18:
      pcVar2 = &cf_Arequiredservicewasnotfound;
      break;
    case 0x19:
      pcVar2 = &cf_Thedevicehasuncollectedfactorylogs;
      break;
    case 0x1a:
      pcVar2 = &cf_fsckfailed;
      break;
    case 0x1b:
      pcVar2 = &cf_Filesystemmountfailed;
      break;
    case 0x1c:
      pcVar2 = &cf_TimeoutwaitingforNAND;
      break;
    case 0x1d:
      pcVar2 = &cf_Anerroroccurredduringthegasgaugesoftwareupdate;
      break;
    case 0x1e:
      pcVar2 = &cf_Unabletoenablejournalingonthedatapartition;
      break;
    case 0x1f:
      pcVar2 = &cf_Failedtoconvertvalue;
      break;
    case 0x20:
      pcVar2 = &cf_Failedtocomputehash;
      break;
    case 0x21:
      pcVar2 = &cf_Acryptoerroroccurred;
      break;
    case 0x22:
      pcVar2 = &cf_Unabletocreatedevicekeybag;
      break;
    case 0x23:
      pcVar2 = &cf_AnerroroccurredwhileformattingtheNAND;
      break;
    case 0x24:
      pcVar2 = &cf_Effaceablestorageerror;
      break;
    case 0x25:
      pcVar2 = &cf_Firmwareupdateerror;
      break;
    case 0x26:
      pcVar2 = &cf_AnerroroccurredwhileupdatingtheIRMCUfirmware;
      break;
    case 0x27:
      pcVar2 = &cf_Thesystempartitionistoosmallfortherequestedimage;
      break;
    case 0x28:
      pcVar2 = &cf_TheNANDdriverfailedduringinitialization;
      break;
    case 0x29:
      pcVar2 = &cf_Anerroroccurredattemptingtolocatefilesystempartitions;
      break;
    case 0x2a:
      pcVar2 = &cf_FailedtoformatthedeviceforLwVM;
      break;
    case 0x2b:
      pcVar2 = &cf_Networkerror;
      break;
    case 0x2c:
      pcVar2 = &cf_Badresponse;
      break;
    case 0x2d:
      pcVar2 = &cf_Thesystempartitionsizeistoolargeforthedevice;
      break;
    case 0x2e:
      pcVar2 = &cf_Anerroroccurredcreatingthepartitionmap;
      break;
    case 0x2f:
      pcVar2 = &cf_Anerroroccurredcreatinganewfilesystem;
      break;
    case 0x30:
      pcVar2 = &cf_Devicesoftwaredoesnotsupportnoncegeneration;
      break;
    case 0x31:
      pcVar2 = &cf_CouldnotloadSSOframework_pleasemakesureyou_veinstalledAppleConnect_app;
      break;
    case 0x32:
      pcVar2 = &cf_UnabletobootSEP;
      break;
    case 0x33:
      pcVar2 = &cf_MissingSEPfirmware;
      break;
    case 0x34:
      pcVar2 = &cf_FDRnofilesystemerror;
      break;
    case 0x35:
      pcVar2 = &cf_FDRfailure;
      break;
    case 0x36:
      pcVar2 = &cf_SEPEEPROMtestfailure;
      break;
    case 0x37:
      pcVar2 = &cf_Stockholmpairingfailure;
      break;
    case 0x38:
      pcVar2 = &cf_Stockholmupdatefailure;
      break;
    case 0x39:
      pcVar2 = &cf_SWDupdatefailure;
      break;
    case 0x3a:
      pcVar2 = &cf_SEPcertificationfailure;
      break;
    case 0x3b:
      pcVar2 = &cf_Invalidnoncetype;
      break;
    case 0x3c:
      pcVar2 = &cf_Incompatiblefilesystem;
      break;
    case 0x3d:
      pcVar2 = &cf_Savagecertificationfailure;
      break;
    case 0x3e:
      pcVar2 = &cf_Symlinktargetvanished;
      break;
    case 0x3f:
      pcVar2 = &cf_Requiredkeynotfound;
      break;
    case 0x40:
      pcVar2 = &cf_FDRPUTfailure;
      break;
    case 0x42:
      pcVar2 = &cf_SEPcommitfailure;
      break;
    case 0x43:
      pcVar2 = &cf_Yonkerscertificationfailure;
      break;
    case 0x44:
      pcVar2 = &cf_Updateinstallnotpossibletothisvariant;
      break;
    case 0x45:
      pcVar2 = &cf_Updateroperationerror;
      break;
    case 0x46:
      pcVar2 = &cf_Updaternotfounderror;
      break;
    case 0x47:
      pcVar2 = &cf_UCRTretrievalfailed;
      break;
    case 0x48:
      pcVar2 = &cf_Errorinitgigalocker;
      break;
    case 0x49:
      pcVar2 = &cf_RecoveryOSpartitiontoosmall;
      break;
    case 0x4a:
      pcVar2 = &cf_RecoveryOSmissingsizeargument;
      break;
    case 0x4b:
      pcVar2 = &cf_Missingdatavolume;
      break;
    case 0x4c:
      pcVar2 = &cf_PreloadingAPFSdatakeysfailed;
      break;
    case 0x4d:
      pcVar2 = &cf_XARTpartitionunsupported;
      break;
    case 0x4e:
      pcVar2 = &cf_Nostorageerror;
      break;
    case 0x4f:
      pcVar2 = &cf_Dotaralockfailure;
      break;
    case 0x50:
      pcVar2 = &cf_ErrorcreatingAPFSvolumegroup;
      break;
    case 0x51:
      pcVar2 = &cf_Errorcopyingdatatemplate;
      break;
    case 0x52:
      pcVar2 = &cf_Errorcreatingfirmlinks;
      break;
    case 0x53:
      pcVar2 = &cf_EANstorageerror;
      break;
    case 0x54:
      pcVar2 = &cf_SEPnotifyfailure;
      break;
    case 0x55:
      pcVar2 = &cf_Errorpreservingsourcebootobjects;
      break;
    case 0x56:
      pcVar2 = &cf_Errorpopulatingprebootvolume;
      break;
    case 0x57:
      pcVar2 = &cf_Blesserror;
      break;
    case 0x58:
      pcVar2 = &cf_Errorpreparingbootinstall;
      break;
    case 0x59:
      pcVar2 = &cf_Errorsettingrootlessflags;
      break;
    case 0x5a:
      pcVar2 = &cf_Bootpolicyerror;
      break;
    case 0x5b:
      pcVar2 = &cf_SysConfigfailure;
      break;
    case 0x5c:
      pcVar2 = &cf_Errorpopulatingpairedrecoveryvolume;
      break;
    case 0x5d:
      pcVar2 = &cf_ErrorpopulatingAppleinternaldiags;
      break;
    case 0x65:
      pcVar2 = &cf_CreatingAPFSmediakeysfailed;
      break;
    case 0x66:
      pcVar2 = &cf_NVRAMisfullandcouldnotperformsave;
      break;
    case 0x67:
      pcVar2 = &cf_ErrorwritingtoNVRAM;
      break;
    case -1:
      pcVar2 = &cf_Genericerror;
    }
    goto LAB_000e7615;
  }
  if (param_1 < 0x7d1) {
    switch(param_1) {
    case 0x3e9:
      pcVar2 = &cf_Genericusererror;
      break;
    case 0x3ea:
      pcVar2 = &cf_Basebandprotocolerror;
      break;
    case 0x3eb:
      pcVar2 = &cf_Bbupdateronlyworksonlittle_endianhosts;
      break;
    case 0x3ec:
      pcVar2 = &cf_Badargumentsgiventobbupdater;
      break;
    case 0x3ed:
      pcVar2 = &cf_Specifiedbootloaderisinvalid;
      break;
    case 0x3ee:
      pcVar2 = &cf_Flashfilesizemismatch;
      break;
    case 0x3ef:
      pcVar2 = &cf_Specifiedbbfwfileisinvalid;
      break;
    case 0x3f0:
      pcVar2 = &cf_Unabletoreadthebbfwfile;
      break;
    case 0x3f1:
      pcVar2 = &cf_bbfwfileisnotproperlysigned;
      break;
    case 0x3f2:
      pcVar2 = &cf_Unabletoinitializethecommlayer;
      break;
    case 0x3f3:
      pcVar2 = &cf_Basebandbootloaderistooold;
      break;
    case 0x3f4:
      pcVar2 = &cf_BBFWcouldnotbeverified;
      break;
    case 0x3f5:
      pcVar2 = &cf_Unrecognizedbbupdatererror;
      break;
    case 0x3f6:
      pcVar2 = &cf_SettingIMEISVfailed;
      break;
    case 0x3f7:
      pcVar2 = &cf_Thebasebandcannotberolledback;
      break;
    case 0x3f8:
      pcVar2 = &cf_BadstaticEEP;
      break;
    case 0x3f9:
      pcVar2 = &cf_Basebandfusingfailed;
      break;
    case 0x3fa:
      pcVar2 = &cf_Unpersonalizedbasebandfirmwarerejected_personalizationmayberequired_;
      break;
    case 0x3fb:
      pcVar2 = &cf_Basebandprovisioningfailed;
      break;
    case 0x3fc:
      pcVar2 = &cf_Thebasebandsystemfilesystemwasnotmounted;
      break;
    case 0x3fd:
      pcVar2 = &cf_BasebandprovisioningFDRuploadfailed;
      break;
    default:
      switch(param_1) {
      case 0x5dc:
        pcVar2 = &cf_GenericUCRTretrievalerror;
        break;
      case 0x5dd:
        pcVar2 = &cf_Aninternalerroroccurred;
        break;
      case 0x5de:
        pcVar2 = &cf_Invalidinput;
        break;
      case 0x5df:
        pcVar2 = &cf_UnsupportedAPI;
        break;
      case 0x5e0:
        pcVar2 = &cf_UCRTismissing;
        break;
      case 0x5e1:
        pcVar2 = &cf_Anunrecoverablenetworkfailureoccurred_devicemaybeactivationlocked;
        break;
      case 0x5e2:
        pcVar2 = &cf_Arecoverablenetworkfailureoccurred;
        break;
      case 0x5e3:
        pcVar2 = &cf_Callerismissingrequiredentitlement;
        break;
      case 0x5e4:
      case 0x5e6:
      case 0x5e8:
      case 0x5e9:
        goto switchD_000e6d5f_caseD_0;
      case 0x5e5:
        pcVar2 = &cf_BootpolicySEPerror;
        break;
      case 0x5e7:
        pcVar2 = &cf_Attestationfailure;
        break;
      case 0x5ea:
        pcVar2 = &cf_BootpolicyxARTerror;
        break;
      case 0x5eb:
        pcVar2 = &cf_TheInternetconnectionappearstobeoffline;
        break;
      case 0x5ec:
        pcVar2 = &cf_Thenetworkrequesttimedout;
        break;
      case 0x5ed:
        pcVar2 = &cf_Thenetworkrequestwascancelled;
        break;
      case 0x5ee:
        pcVar2 = &cf_Aserverwiththespecifiedhostnamecouldnotbefound;
        break;
      case 0x5ef:
        pcVar2 = &cf_Therewasaproblemcommunicatingwiththewebproxyserver;
        break;
      default:
        switch(param_1) {
        case 0x44c:
          pcVar2 = &cf_GenericASRerror;
          break;
        case 0x44d:
          pcVar2 = &cf_ASRinvertererror;
          break;
        case 0x44e:
          pcVar2 = &cf_RanoutofspaceduringASR;
          break;
        case 0x44f:
          pcVar2 = &cf_RanoutofspaceduringASRinverter;
          break;
        case 0x450:
          pcVar2 = &cf_GotEIOwhilehandlingASRserverconnection;
          break;
        case 0x451:
          pcVar2 = &cf_GotEINVALwhilehandlingASRserverconnection;
          break;
        default:
          goto switchD_000e6d5f_caseD_0;
        case 0x456:
          pcVar2 = &cf_Insufficientspaceforupgradeinstall;
        }
      }
    }
    goto LAB_000e7615;
  }
  if (param_1 < 0x836) {
    switch(param_1) {
    case 0x7d1:
      pcVar2 = &cf_UnabletoopenUSBdevice;
      break;
    case 0x7d2:
      pcVar2 = &cf_Unabletofindandopenaninterfaceondevice;
      break;
    case 0x7d3:
      pcVar2 = &cf_ErrorwhilewritingonUSBpipe;
      break;
    case 0x7d4:
      pcVar2 = &cf_ErrorwhilereadingfromUSBpipe;
      break;
    case 0x7d5:
      pcVar2 = &cf_AnerroroccurredperformingDFU;
      break;
    case 0x7d6:
      pcVar2 = &cf_USBDevicenotresponding;
      break;
    case 0x7d7:
      pcVar2 = &cf_FailedtocreateUSBdeviceinstance;
      break;
    case 0x7d8:
      pcVar2 = &cf_USBpipestalled;
      break;
    case 0x7d9:
      pcVar2 = &cf_USBdevicerequesterrorreturnedfromrequesttoiBoot;
      break;
    case 0x7da:
      pcVar2 = &cf_USBdeviceerror;
      break;
    case 0x7db:
      pcVar2 = &cf_ThedeviceisconnectedtoalowpowerUSBport;
      break;
    case 0x7dc:
      pcVar2 = &cf_USBexclusiveaccess;
      break;
    case 0x7dd:
      pcVar2 = &cf_USBtimeout;
      break;
    case 0x7de:
      pcVar2 = &cf_USBnotreadable;
      break;
    case 0x7df:
      pcVar2 = &cf_NoUSBdevice;
      break;
    default:
      if (param_1 == 0x835) {
        pcVar2 = &cf_FailedgettingrecoveryOSsize;
        break;
      }
      goto switchD_000e6d5f_caseD_0;
    }
    goto LAB_000e7615;
  }
  if (0x1a86 < param_1) {
    if (param_1 == 0x1a87) {
      pcVar2 = &
               cf_AppleConnectfailedtoauthenticate_Makesuretohaveavalidsessionand_oravoidusingstealthauthentication
      ;
      goto LAB_000e7615;
    }
    if (param_1 == 0x1a88) {
      pcVar2 = &cf_AppleConnectauthenticationcancelled;
      goto LAB_000e7615;
    }
    goto switchD_000e6d5f_caseD_0;
  }
  switch(param_1) {
  case 3000:
    pcVar2 = &cf_Badbuildidentity;
    break;
  case 0xbb9:
  case 0xbbe:
  case 0xbbf:
  case 0xbc0:
  case 0xbc1:
  case 0xbc2:
  case 0xbc3:
    goto switchD_000e6d5f_caseD_0;
  case 0xbba:
    pcVar2 = &cf_Entrynotfound;
    break;
  case 0xbbb:
    pcVar2 = &cf_Notimplemented;
    break;
  case 0xbbc:
    pcVar2 = &cf_Servernotreachable;
    break;
  case 0xbbd:
    pcVar2 = &cf_Invalidimg3object;
    break;
  case 0xbc4:
    pcVar2 = &cf_Emptyrequest;
    break;
  case 0xbc5:
    pcVar2 = &cf_Servertimedout;
    break;
  case 0xbc6:
    pcVar2 = &cf_Internal_pleasefilearadar_;
    break;
  case 0xbc7:
    pcVar2 = &cf_AuthInstallerror;
    break;
  case 0xbc8:
    pcVar2 = &cf_Invalidbasebandobject;
    break;
  case 0xbc9:
    pcVar2 = &cf_APprovisioningfailed;
    break;
  case 0xbca:
    pcVar2 = &cf_APalreadyprovisioned;
    break;
  default:
    if (param_1 == 0x836) {
      pcVar2 = &cf_NotenoughspacetoinstallrecoveryOS;
      break;
    }
    goto switchD_000e6d5f_caseD_0;
  }
  goto LAB_000e7615;
switchD_000e6d5f_caseD_0:
  if (899 < param_1 - 0xc1cU) {
    _CFStringCreateWithFormat
              (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf_Unrecognizederror__d_,param_1)
    ;
    return;
  }
  lVar1 = _AMRAuthInstallCopyLocalizedStringForServerError(param_1);
  if (lVar1 != 0) {
    return;
  }
  switch(param_1) {
  case 0xdad:
    pcVar2 = &cf_HTTPunauthorizederror;
    break;
  case 0xdaf:
    pcVar2 = &cf_HTTPforbiddenerror;
    break;
  case 0xdb0:
    pcVar2 = &cf_HTTPnotfounderror;
    break;
  case 0xdb3:
    pcVar2 = &cf_HTTPproxyauthenticationneedederror;
    break;
  default:
    if (param_1 == 0xc7a) {
      pcVar2 = &cf_Authorizationdeclined;
      break;
    }
    if (param_1 == 0xe10) {
      pcVar2 = &cf_HTTPinternalservererror;
      break;
    }
  case 0xdae:
  case 0xdb1:
  case 0xdb2:
    pcVar2 = (cfstringStruct *)
             _CFStringCreateWithFormat
                       (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                        &cf_Unrecognizedservererror__d_,param_1);
  }
LAB_000e7615:
  _CFRetain(pcVar2);
  return;
}

