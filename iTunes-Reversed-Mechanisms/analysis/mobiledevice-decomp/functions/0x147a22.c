// rea decompile_all
// name: _AMRLocalizedCopyStringForAMROperation
// address: 0x147a22
// body: available
// range: 0x147a22-0x147ea2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x147e9e to 0x2a97b6 _CFRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRLocalizedCopyStringForAMROperation(undefined4 param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  
  switch(param_1) {
  case 2:
    pcVar2 = &cf_DFUdownload;
    break;
  case 3:
    pcVar2 = &cf_Connectingtodevice;
    break;
  case 4:
    pcVar2 = &cf_Connectedtodevice;
    break;
  case 5:
    pcVar2 = &cf_Sendingramdisktodevice;
    break;
  case 6:
    pcVar2 = &cf_Sendingdevicetreetodevice;
    break;
  case 7:
    pcVar2 = &cf_Sendingkernelcachetodevice;
    break;
  case 8:
    pcVar2 = &cf_Settingrestoreboot_args;
    break;
  case 9:
  case 0xcc:
  case 0xcd:
  case 0xce:
    pcVar2 = &cf_Booting;
    break;
  case 10:
    pcVar2 = &cf_FlashingSYSCFG;
    break;
  case 0xb:
    pcVar2 = &cf_Creatingpartitionmap;
    break;
  case 0xc:
    pcVar2 = &cf_Creatingfilesystem;
    break;
  case 0xd:
    pcVar2 = &cf_Restoringimage;
    break;
  case 0xe:
    pcVar2 = &cf_Verifyingrestore;
    break;
  case 0xf:
    pcVar2 = &cf_Checkingfilesystems;
    break;
  case 0x10:
    pcVar2 = &cf_Mountingfilesystems;
    break;
  case 0x11:
    pcVar2 = &cf_Fixingup_var;
    break;
  case 0x12:
    pcVar2 = &cf_Flashingfirmware;
    break;
  case 0x13:
    pcVar2 = &cf_Updatingbaseband;
    break;
  case 0x14:
    pcVar2 = &cf_Settingbootstage;
    break;
  case 0x15:
    pcVar2 = &cf_Rebootingdevice;
    break;
  case 0x16:
    pcVar2 = &cf_Shuttingdowndevice;
    break;
  case 0x17:
    pcVar2 = &cf_Turningonaccessorypower;
    break;
  case 0x18:
    pcVar2 = &cf_Clearingpersistentboot_args;
    break;
  case 0x19:
    pcVar2 = &cf_Modifyingpersistentboot_args;
    break;
  case 0x1a:
    pcVar2 = &cf_Installingroot;
    break;
  case 0x1b:
    pcVar2 = &cf_Installingkernelcache;
    break;
  case 0x1c:
    pcVar2 = &cf_WaitingforNAND;
    break;
  case 0x1d:
    pcVar2 = &cf_Unmountingfilesystems;
    break;
  case 0x1e:
    pcVar2 = &cf_Settingdateandtimeondevice;
    break;
  case 0x1f:
    pcVar2 = &cf_ExecutingiBECtobootstrapupdate;
    break;
  case 0x20:
    pcVar2 = &cf_FinalizingNANDepochupdate;
    break;
  case 0x21:
    pcVar2 = &cf_Checkingforinappropriatebootablepartitions;
    break;
  case 0x22:
    pcVar2 = &cf_Creatingfactoryrestoremarker;
    break;
  case 0x23:
    pcVar2 = &cf_Loadingfirmwaredatatoflash;
    break;
  case 0x24:
    pcVar2 = &cf_RequestingFUDdata;
    break;
  case 0x25:
    pcVar2 = &cf_Removingactivationrecord;
    break;
  case 0x26:
    pcVar2 = &cf_Checkingbatteryvoltage;
    break;
  case 0x27:
    pcVar2 = &cf_Waitingforbatterytocharge;
    break;
  case 0x28:
    pcVar2 = &cf_Closingmodemtickets;
    break;
  case 0x29:
    pcVar2 = &cf_Migratingdata;
    break;
  case 0x2a:
    pcVar2 = &cf_Wipingstoragedevice;
    break;
  case 0x2b:
    pcVar2 = &cf_SendingApplelogotodevice;
    break;
  case 0x2c:
    pcVar2 = &cf_Checkingforuncollectedlogs;
    break;
  case 0x2d:
  case 0xcb:
    pcVar2 = &cf_Personalizingrestorebundle;
    break;
  case 0x2e:
    pcVar2 = &cf_ClearingNVRAM;
    break;
  case 0x2f:
    pcVar2 = &cf_Updatinggasgaugesoftware;
    break;
  case 0x30:
    pcVar2 = &cf_Preparingforbasebandupdate;
    break;
  case 0x31:
    pcVar2 = &cf_Bootingthebaseband;
    break;
  case 0x32:
    pcVar2 = &cf_Creatingsystemkeybag;
    break;
  case 0x33:
    pcVar2 = &cf_UpdatingIRMCUfirmware;
    break;
  case 0x34:
    pcVar2 = &cf_Resizingsystempartition;
    break;
  case 0x35:
    pcVar2 = &cf_Collectingupdateroutput;
    break;
  case 0x36:
    pcVar2 = &cf_PairingStockholm;
    break;
  case 0x37:
    pcVar2 = &cf_UpdatingStockholm;
    break;
  case 0x38:
    pcVar2 = &cf_UpdatingSWDHID;
    break;
  case 0x39:
    pcVar2 = &cf_CertifyingSEP;
    break;
  case 0x3a:
    pcVar2 = &cf_UpdatingNANDFirmware;
    break;
  case 0x3b:
    pcVar2 = &cf_UpdatingSEFirmware;
    break;
  case 0x3c:
    pcVar2 = &cf_UpdatingSavage;
    break;
  case 0x3d:
    pcVar2 = &cf_Installingdevicetree;
    break;
  case 0x3e:
    pcVar2 = &cf_CertifyingSavage;
    break;
  case 0x3f:
    pcVar2 = &cf_SubmittingProvinfo;
    break;
  case 0x40:
    pcVar2 = &cf_CertifyingYonkers;
    break;
  case 0x41:
    pcVar2 = &cf_UpdatingRose;
    break;
  case 0x42:
    pcVar2 = &cf_UpdatingVeridian;
    break;
  case 0x43:
    pcVar2 = &cf_CreatingProtectedVolume;
    break;
  case 0x44:
    pcVar2 = &cf_ResizingMainFileSystemPartition;
    break;
  case 0x45:
    pcVar2 = &cf_CreatingRecoveryOSPartition_Container_Volume;
    break;
  case 0x46:
    pcVar2 = &cf_InstallingrecoveryOSfiles;
    break;
  case 0x47:
    pcVar2 = &cf_InstallingrecoveryOSimage;
    break;
  default:
    uVar1 = _CFStringCreateWithFormat
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       &cf_Unrecognizedoperation__d_,param_1);
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"Unrecognized operation (%d)",param_1);
    return uVar1;
  case 0x4a:
    pcVar2 = &cf_RequestingEANdata;
    break;
  case 0x4d:
    pcVar2 = &cf_Sealingsystemvolume;
    break;
  case 0x4e:
    pcVar2 = &cf_Preservingsourcebootobjects;
    break;
  case 0x4f:
    pcVar2 = &cf_UpdatingAppleTCON;
    break;
  case 0x50:
    pcVar2 = &cf_Fetchingpersonalizeddata;
    break;
  case 0x52:
    pcVar2 = &cf_UpdatingAppleTypeCRetimer;
    break;
  case 0x54:
    pcVar2 = &cf_UpdatingPS190;
    break;
  case 0x55:
    pcVar2 = &cf_UpdatingAce3;
    break;
  case 0x59:
    pcVar2 = &cf_UpdatingPFX;
    break;
  case 0x5a:
    pcVar2 = &cf_UpdatingVinyl;
    break;
  case 0x5c:
    pcVar2 = &cf_UpdatingAppleTconUARP;
    break;
  case 200:
    pcVar2 = &cf_Downloadingrestorebundle;
    break;
  case 0xc9:
    pcVar2 = &cf_UnzippingIPSW;
    break;
  case 0xca:
    pcVar2 = &cf_Mountingdiskimage;
    break;
  case 0xcf:
    pcVar2 = &cf_Enteringrecoverymode;
    break;
  case 0xd0:
    pcVar2 = &cf_Waiting_position_d;
    break;
  case 0xd1:
    pcVar2 = &cf_SendingFDRuserinfo;
    break;
  case 0xd3:
    pcVar2 = &cf_ShowingUnlockDeviceUI;
    break;
  case 0xd4:
    pcVar2 = &cf_HidingUnlockDeviceUI;
    break;
  case 0xd5:
    pcVar2 = &cf_Regeneratingdyldsharedcache;
  }
  uVar1 = _CFRetain(pcVar2);
  return uVar1;
}

