// rea decompile_all
// name: _MobileDevelopmentConvertError
// address: 0x112a44
// body: available
// range: 0x112a44-0x112c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x112c63 to 0x14516c __AddNewAMDError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _MobileDevelopmentConvertError(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = _CFEqual(param_1,&cf_ExistingTransferInProgress);
  uVar2 = 0xe8000124;
  if (cVar1 == '\0') {
    cVar1 = _CFEqual(param_1,&cf_MissingImageSignature);
    uVar2 = 0xe800006d;
    if (cVar1 == '\0') {
      cVar1 = _CFEqual(param_1,&cf_ResponseCreationFailed);
      uVar2 = 0xe800006e;
      if (cVar1 == '\0') {
        cVar1 = _CFEqual(param_1,&cf_MissingImageType);
        uVar2 = 0xe800006f;
        if (cVar1 == '\0') {
          cVar1 = _CFEqual(param_1,&cf_MissingImagePath);
          uVar2 = 0xe8000070;
          if (cVar1 == '\0') {
            cVar1 = _CFEqual(param_1,&cf_ImageMapLoadFailed);
            uVar2 = 0xe8000071;
            if (cVar1 == '\0') {
              cVar1 = _CFEqual(param_1,&cf_AlreadyMounted);
              uVar2 = 0xe8000072;
              if (cVar1 == '\0') {
                cVar1 = _CFEqual(param_1,&cf_ImageMoveFailed);
                uVar2 = 0xe8000073;
                if (cVar1 == '\0') {
                  cVar1 = _CFEqual(param_1,&cf_MountPathMissing);
                  uVar2 = 0xe8000074;
                  if (cVar1 == '\0') {
                    cVar1 = _CFEqual(param_1,&cf_MountPathNotEmpty);
                    uVar2 = 0xe8000075;
                    if (cVar1 == '\0') {
                      cVar1 = _CFEqual(param_1,&cf_ImageMountFailed);
                      uVar2 = 0xe8000076;
                      if (cVar1 == '\0') {
                        cVar1 = _CFEqual(param_1,&cf_TrustCacheLoadFailed);
                        uVar2 = 0xe8000077;
                        if (cVar1 == '\0') {
                          cVar1 = _CFEqual(param_1,&cf_DigestFailed);
                          uVar2 = 0xe8000078;
                          if (cVar1 == '\0') {
                            cVar1 = _CFEqual(param_1,&cf_DigestCreationFailed);
                            uVar2 = 0xe8000079;
                            if (cVar1 == '\0') {
                              cVar1 = _CFEqual(param_1,&cf_ImageVerificationFailed);
                              uVar2 = 0xe800007a;
                              if (cVar1 == '\0') {
                                cVar1 = _CFEqual(param_1,&cf_ImageInfoCreationFailed);
                                uVar2 = 0xe800007b;
                                if (cVar1 == '\0') {
                                  cVar1 = _CFEqual(param_1,&cf_ImageMapStoreFailed);
                                  uVar2 = 0xe800007c;
                                  if (cVar1 == '\0') {
                                    cVar1 = _CFEqual(param_1,&cf_DeviceLocked);
                                    uVar2 = 0xe80000e2;
                                    if (cVar1 == '\0') {
                                      cVar1 = _CFEqual(param_1,&cf_DeviceLocked);
                                      if (cVar1 == '\0') {
                                        uVar2 = __AddNewAMDError(param_1);
                                        return uVar2;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

