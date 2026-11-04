// rea decompile_all
// name: _AMAuthInstallApImg4EncodeRestoreDict
// address: 0x279392
// body: available
// range: 0x279392-0x27984b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x279847 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApImg4EncodeRestoreDict(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  char *pcVar7;
  long lVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  undefined8 uStack_170;
  undefined4 local_154;
  undefined8 local_150;
  void *local_148;
  long local_140;
  char local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_150 = 0;
  local_148 = (void *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_002797b4:
    local_148 = (void *)0x0;
    pvVar13 = (void *)0x0;
    local_140 = 0;
LAB_00279771:
    lVar11 = 0;
LAB_00279774:
    lVar10 = 0;
    lVar8 = 0;
  }
  else {
    pvVar13 = (void *)0x0;
    local_140 = 0;
    lVar11 = 0;
    lVar10 = 0;
    lVar8 = 0;
    if (param_3 != 0) {
      local_140 = _DEREncoderCreate(1);
      if (local_140 == 0) goto LAB_002797b4;
      uVar5 = _CFDictionaryGetCount(param_1);
      sVar9 = (uVar5 & 0xffffffff) << 3;
      pvVar6 = _malloc(sVar9);
      pvVar13 = _malloc(sVar9);
      local_148 = pvVar6;
      if ((pvVar6 == (void *)0x0) || (pvVar13 == (void *)0x0)) {
        lVar10 = 0;
        lVar8 = 0;
        lVar11 = 0;
        goto LAB_00279776;
      }
      _CFDictionaryGetKeysAndValues(param_1,pvVar6,pvVar13);
      if ((uVar5 & 0xffffffff) != 0) {
        uVar12 = 0;
        do {
          lVar11 = *(long *)((long)local_148 + uVar12 * 8);
          if (lVar11 == 0) {
LAB_0027977f:
            pcVar7 = "invalid overridesKey";
LAB_00279764:
            _AMAuthInstallLog(3,"AMAuthInstallApImg4EncodeRestoreDict",pcVar7);
            goto LAB_00279771;
          }
          lVar8 = _CFGetTypeID(lVar11);
          lVar10 = _CFStringGetTypeID();
          if (lVar8 != lVar10) goto LAB_0027977f;
          if (*(long *)((long)pvVar13 + uVar12 * 8) == 0) {
            pcVar7 = "invalid overridesValue";
            goto LAB_00279764;
          }
          lVar8 = _CFGetTypeID();
          lVar10 = _CFDataGetTypeID();
          if (lVar8 != lVar10) {
            lVar8 = _CFGetTypeID(*(undefined8 *)((long)pvVar13 + uVar12 * 8));
            lVar10 = _CFBooleanGetTypeID();
            if (lVar8 == lVar10) {
              uVar2 = _CFBooleanGetValue();
              iVar4 = _AMAuthInstallApImg4AddBooleanProperty(local_140,lVar11,uVar2);
              goto LAB_00279590;
            }
            lVar8 = _CFGetTypeID(*(undefined8 *)((long)pvVar13 + uVar12 * 8));
            lVar10 = _CFNumberGetTypeID();
            if (lVar8 == lVar10) {
              uVar1 = *(undefined8 *)((long)pvVar13 + uVar12 * 8);
              lVar8 = _CFNumberGetType(uVar1);
              if (lVar8 == 3) {
                iVar4 = _AMAuthInstallApImg4AddInteger32Property(local_140,lVar11,uVar1);
              }
              else {
                lVar11 = _CFNumberGetType(uVar1);
                if (lVar11 != 4) {
                  pcVar7 = "%s: unexpected integer type";
                  goto LAB_00279742;
                }
                iVar4 = _AMAuthInstallApImg4AddInteger64Property
                                  (local_140,*(undefined8 *)((long)local_148 + uVar12 * 8),uVar1);
              }
              goto LAB_00279590;
            }
            pcVar7 = "%s: unexpected restore property type";
LAB_00279742:
            _AMAuthInstallLog(3,"AMAuthInstallApImg4EncodeRestoreDict",pcVar7);
LAB_00279756:
            pcVar7 = "failed to encode restore property";
            goto LAB_00279764;
          }
          iVar4 = _AMAuthInstallApImg4AddDataProperty(local_140,lVar11);
LAB_00279590:
          if (iVar4 != 0) goto LAB_00279756;
          uVar12 = uVar12 + 1;
        } while ((uVar5 & 0xffffffff) != uVar12);
      }
      lVar11 = _DEREncoderCreate(0);
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        cVar3 = _CFStringGetCString(&cf_IM4R,local_138,0x100,0x8000100);
        if (cVar3 != '\0') {
          sVar9 = _strlen(local_138);
          iVar4 = _DEREncoderAddData(lVar11,0,0x16,local_138,sVar9 & 0xffffffff,0);
          if (iVar4 != 0) {
            _AMAuthInstallLog(3,"AMAuthInstallApImg4EncodeRestoreDict","failed to add %@ string",
                              &cf_IM4M);
            goto LAB_00279774;
          }
        }
        iVar4 = _DEREncoderAddSetFromEncoder(local_140,lVar11);
        if (iVar4 == 0) {
          lVar10 = 0;
          lVar8 = _DEREncoderCreate(0);
          uStack_170 = 2;
          if (lVar8 == 0) {
            lVar8 = 0;
            goto LAB_002796c5;
          }
          iVar4 = _DEREncoderAddSequenceFromEncoder(lVar11,lVar8);
          if (iVar4 == 0) {
            iVar4 = _DEREncoderCreateEncodedBuffer(lVar8,&local_150,&local_154);
            if (iVar4 == 0) {
              lVar10 = _DEREncoderCreate(0);
              if (lVar10 == 0) {
                lVar10 = 0;
                goto LAB_002796c5;
              }
              iVar4 = _DEREncoderAddData(lVar10,2,1,local_150,local_154,1);
              if (iVar4 == 0) {
                iVar4 = _DEREncoderCreateEncodedBuffer(lVar10,param_2,param_3);
                uStack_170 = 0;
                if (iVar4 == 0) goto LAB_002796c5;
              }
            }
            else {
              lVar10 = 0;
            }
          }
          else {
            lVar10 = 0;
            _AMAuthInstallLog(3,"AMAuthInstallApImg4EncodeRestoreDict",
                              "failed to encode restore info sequence");
          }
          goto LAB_00279776;
        }
        _AMAuthInstallLog(3,"AMAuthInstallApImg4EncodeRestoreDict",
                          "failed to encode restore info properties as set");
      }
      goto LAB_00279774;
    }
  }
LAB_00279776:
  uStack_170 = 3;
LAB_002796c5:
  _SafeFree(local_148);
  _SafeFree(pvVar13);
  _SafeFree(local_150);
  _DEREncoderDestroy(local_140);
  _DEREncoderDestroy(lVar11);
  _DEREncoderDestroy(lVar10);
  _DEREncoderDestroy(lVar8);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uStack_170;
}

