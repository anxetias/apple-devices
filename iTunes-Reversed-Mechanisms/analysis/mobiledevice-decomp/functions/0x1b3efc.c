// rea decompile_all
// name: _AMAuthInstallSupportCreateDecodedPEM
// address: 0x1b3efc
// body: available
// range: 0x1b3efc-0x1b40bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallSupportCreateDecodedPEM
          (long param_1,size_t param_2,undefined8 *param_3,size_t *param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  size_t sVar11;
  undefined8 uVar12;
  
  if (param_1 == 0) {
    _AMAuthInstallSupportCreateDecodedPEM_cold_6();
LAB_001b4099:
    uVar12 = 1;
  }
  else {
    if (param_2 == 0) {
      _AMAuthInstallSupportCreateDecodedPEM_cold_5();
      goto LAB_001b4099;
    }
    if (param_3 == (undefined8 *)0x0) {
      _AMAuthInstallSupportCreateDecodedPEM_cold_4();
      goto LAB_001b4099;
    }
    if (param_4 == (size_t *)0x0) {
      _AMAuthInstallSupportCreateDecodedPEM_cold_3();
      goto LAB_001b4099;
    }
    pvVar5 = _calloc(1,param_2);
    if (pvVar5 != (void *)0x0) {
      lVar9 = 0;
      uVar7 = 0;
      uVar8 = 0;
      bVar10 = false;
      bVar3 = true;
      while ((bVar2 = bVar3, uVar7 < param_2 && (uVar8 < 2))) {
        if (!bVar2) goto LAB_001b4045;
        bVar1 = *(byte *)(param_1 + uVar7);
        if ((bVar1 == 10) || (bVar1 == 0xd)) {
          uVar8 = uVar8 + bVar10;
          bVar10 = false;
LAB_001b3fd0:
          bVar3 = false;
          if ((bVar1 < 0x3e) && ((0x2000880100002600U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
LAB_001b3fe2:
            uVar7 = uVar7 + 1;
            *(byte *)((long)pvVar5 + lVar9) = bVar1;
            lVar9 = lVar9 + 1;
            bVar3 = bVar2;
          }
        }
        else {
          if (bVar1 != 0x2d) {
            if (bVar10) goto LAB_001b3ff7;
            if ((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)))
            goto LAB_001b3fd0;
            goto LAB_001b3fe2;
          }
          bVar10 = true;
LAB_001b3ff7:
          uVar7 = uVar7 + 1;
          bVar3 = bVar2;
        }
      }
      if (bVar2) {
        iVar4 = _b64decode(pvVar5);
        sVar11 = (size_t)iVar4;
        pvVar6 = _calloc(1,sVar11);
        if (pvVar6 == (void *)0x0) {
          _AMAuthInstallSupportCreateDecodedPEM_cold_1();
          uVar12 = 3;
        }
        else {
          _memcpy(pvVar6,pvVar5,sVar11);
          *param_4 = sVar11;
          *param_3 = pvVar6;
          uVar12 = 0;
        }
      }
      else {
LAB_001b4045:
        uVar12 = 3;
        _AMAuthInstallLog(3,"AMAuthInstallSupportCreateDecodedPEM",
                          "Input PEM has non-base64 chars at byte %d");
      }
      goto LAB_001b4065;
    }
    _AMAuthInstallSupportCreateDecodedPEM_cold_2();
    uVar12 = 2;
  }
  pvVar5 = (void *)0x0;
LAB_001b4065:
  _free(pvVar5);
  return uVar12;
}

