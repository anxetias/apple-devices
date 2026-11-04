// rea decompile_all
// name: _BackendCreate
// address: 0x199970
// body: available
// range: 0x199970-0x199b3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _BackendCreate(long *param_1,undefined1 *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = _uarpZalloc(0x50);
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    if (lVar1 == 0) {
      if (param_2[2] == '\0') {
        *(code **)(lVar3 + 8) = _internalBackendDestroy;
        *(code **)(lVar3 + 0x10) = _internalBackendGetPersParam;
        *(code **)(lVar3 + 0x18) = _internalBackendFlash;
        *(code **)(lVar3 + 0x20) = _internalBackendGetFlags;
        *(code **)(lVar3 + 0x30) = _internalBackendGetActiveVersion;
        *(code **)(lVar3 + 0x38) = _internalBackendGetStagedVersion;
        *(code **)(lVar3 + 0x40) = _internalBackendApply;
        iVar2 = _internalBackendCreate
                          (lVar3,*param_2,*(undefined4 *)(param_2 + 4),param_2[8],param_2[1] != '\0'
                           ,param_2[9],param_2[10],*(undefined4 *)(param_2 + 0x48));
      }
      else {
        *(code **)(lVar3 + 8) = _simulationBackendDestroy;
        *(code **)(lVar3 + 0x10) = _simulationBackendGetPersParam;
        *(code **)(lVar3 + 0x18) = _simulationBackendFlash;
        *(code **)(lVar3 + 0x20) = _simulationBackendGetFlags;
        *(code **)(lVar3 + 0x30) = _simulationBackendGetActiveVersion;
        *(code **)(lVar3 + 0x38) = _simulationBackendGetStagedVersion;
        iVar2 = _simulationBackendCreate(lVar3);
      }
    }
    else {
      *(code **)(lVar3 + 8) = _personalizationBackendDestroy;
      *(code **)(lVar3 + 0x10) = _personalizationBackendGetPersParam;
      *(code **)(lVar3 + 0x18) = _personalizationBackendFlash;
      *(code **)(lVar3 + 0x20) = _personalizationBackendGetFlags;
      *(code **)(lVar3 + 0x30) = _personalizationBackendGetActiveVersion;
      *(code **)(lVar3 + 0x48) = _personalizationBackendTagHint;
      iVar2 = _personalizationBackendCreate(lVar3,lVar1,param_3);
    }
  }
  else {
    *(code **)(lVar3 + 8) = _externalBackendDestroy;
    *(code **)(lVar3 + 0x10) = _externalBackendGetPersParam;
    *(code **)(lVar3 + 0x18) = _externalBackendFlash;
    *(code **)(lVar3 + 0x20) = _externalBackendGetFlags;
    *(code **)(lVar3 + 0x48) = _externalBackendTagHint;
    iVar2 = _externalBackendCreate(lVar3,lVar1,param_3,param_2[9]);
  }
  if (iVar2 == 0) {
    *param_1 = lVar3;
    iVar2 = 0;
  }
  else {
    _image3Free(lVar3);
  }
  return iVar2;
}

