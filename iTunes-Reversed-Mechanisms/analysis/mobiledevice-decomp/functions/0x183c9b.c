// rea decompile_all
// name: _fPayloadDataComplete
// address: 0x183c9b
// body: available
// range: 0x183c9b-0x183e20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x183ddf to 0x17af4c _CoreUARPRestoreLogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x183e13 to 0x17b146 _CoreUARPRestoreLogDebug (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fPayloadDataComplete(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  size_t sVar4;
  char *pcVar5;
  long lVar6;
  
  lVar6 = (ulong)*(ushort *)(param_2 + 0x26) * 0x160 + param_2[0x25];
  pvVar3 = (void *)_uarpZalloc(0x400);
  if (param_2[2] == 0) {
    pcVar5 = "UARP Restore (Asset Solicitation): %s: pAsset->_fp is NULL";
  }
  else if (*(FILE **)(lVar6 + 0x58) == (FILE *)0x0) {
    pcVar5 = "UARP Restore (Asset Solicitation): %s: pPayload->_fp is NULL";
  }
  else {
    iVar2 = _fseek(*(FILE **)(lVar6 + 0x58),0,0);
    if (iVar2 == -1) {
      pcVar5 = "UARP Restore (Asset Solicitation): %s: fseek failed";
    }
    else {
      while( true ) {
        sVar4 = _fread(pvVar3,1,0x400,*(FILE **)(lVar6 + 0x58));
        if (sVar4 == 0) break;
        _fwrite(pvVar3,1,sVar4,(FILE *)param_2[2]);
        _fflush((FILE *)param_2[2]);
      }
      _image3Free(pvVar3);
      _fclose(*(FILE **)(lVar6 + 0x58));
      *(undefined8 *)(lVar6 + 0x58) = 0;
      iVar2 = _remove((char *)(lVar6 + 0x60));
      if (iVar2 == 0) goto LAB_00183d8b;
      pcVar5 = "UARP Restore (Asset Solicitation): %s: remove failed";
    }
  }
  _CoreUARPRestoreLogError(param_1,1,pcVar5,"fPayloadWriteToAsset");
LAB_00183d8b:
  iVar2 = *(int *)(param_2 + 0x26);
  uVar1 = (ushort)(iVar2 + 1U);
  *(ushort *)(param_2 + 0x26) = uVar1;
  if (*(ushort *)(param_2 + 0x24) <= uVar1) {
    _uarpPlatformEndpointAssetFullyStaged(param_1 + 0x298,*param_2);
    _CoreUARPRestoreLogDebug
              (param_1,1,"UARP Restore (Asset Solicitation): %s: Asset fully staged",
               "fPayloadDataComplete");
    return;
  }
  iVar2 = _uarpPlatformEndpointAssetSetPayloadIndex(param_1 + 0x298,*param_2,iVar2 + 1U & 0xffff);
  if (iVar2 != 0) {
    _CoreUARPRestoreLogError
              (param_1,1,
               "UARP Restore (Asset Solicitation): %s: uarpPlatformEndpointAssetSetPayloadIndex failed with status: %u"
               ,"fPayloadDataComplete",iVar2);
    return;
  }
  return;
}

