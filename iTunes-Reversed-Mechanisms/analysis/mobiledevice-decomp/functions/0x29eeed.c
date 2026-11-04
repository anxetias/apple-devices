// rea decompile_all
// name: _AMAuthInstallSupportCreateRandomNumber
// address: 0x29eeed
// body: available
// range: 0x29eeed-0x29efcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallSupportCreateRandomNumber(uint param_1)

{
  int iVar1;
  undefined8 in_RAX;
  time_t tVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  undefined8 uStack_38;
  
  iVar1 = _AMAuthInstallSupportCreateRandomNumber_calls + 1;
  bVar9 = _AMAuthInstallSupportCreateRandomNumber_calls == 0;
  _AMAuthInstallSupportCreateRandomNumber_calls = iVar1;
  uStack_38 = in_RAX;
  if (bVar9) {
    tVar2 = _time((time_t *)0x0);
    _srand((uint)tVar2);
  }
  lVar3 = _CFDataCreateMutable(0,(long)(int)param_1);
  lVar7 = 0;
  if ((lVar3 != 0) && (lVar7 = lVar3, 3 < param_1)) {
    lVar4 = 0;
    uVar8 = 1;
    do {
      if (lVar4 != 0) {
        _CFRelease(lVar4);
      }
      iVar1 = _rand();
      uStack_38 = CONCAT44(iVar1,(undefined4)uStack_38);
      lVar4 = _CFDataCreate(0,(long)&uStack_38 + 4,4);
      if (lVar4 == 0) {
        lVar7 = 0;
        lVar4 = lVar3;
        break;
      }
      uVar5 = _CFDataGetBytePtr(lVar4);
      uVar6 = _CFDataGetLength(lVar4);
      _CFDataAppendBytes(lVar3,uVar5,uVar6);
      bVar9 = uVar8 < (ulong)(long)(int)param_1 >> 2;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (bVar9);
    _CFRelease(lVar4);
  }
  return lVar7;
}

