// rea decompile_all
// name: _writeDictToFile
// address: 0xadfac
// body: available
// range: 0xadfac-0xae108 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _writeDictToFile(undefined8 param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  size_t sVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  long local_38;
  
  local_38 = 0;
  lVar2 = _CFPropertyListCreateData(0,param_1,200,0);
  if (lVar2 == 0) {
    _writeDictToFile_cold_2(&local_38);
  }
  else {
    sVar3 = _CFDataGetLength(lVar2);
    pvVar4 = (void *)_CFDataGetBytePtr(lVar2);
    if (pvVar4 == (void *)0x0) {
      _writeDictToFile_cold_1();
    }
    else {
      iVar1 = _open(param_2,0x702,0x1b4);
      if (iVar1 != -1) {
        sVar5 = _write(iVar1,pvVar4,sVar3);
        if (sVar3 == sVar5) {
          uVar8 = 0;
          _dmlog("writeDictToFile",0x51b,&cf_____SuccessfullywroteManifestcacheto_s,param_2);
        }
        else {
          piVar6 = ___error();
          pcVar7 = _strerror(*piVar6);
          _dmlog("writeDictToFile",0x517,&cf_writefailed__s,pcVar7);
          uVar8 = 0xffffffff;
        }
        _close(iVar1);
        goto LAB_000ae0bf;
      }
      piVar6 = ___error();
      pcVar7 = _strerror(*piVar6);
      _dmlog("writeDictToFile",0x512,&cf_openfailedfor_s__s,param_2,pcVar7);
    }
  }
  uVar8 = 0xffffffff;
LAB_000ae0bf:
  if (local_38 != 0) {
    _CFRelease();
  }
  local_38 = 0;
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  return uVar8;
}

