// rea decompile_all
// name: _AMAuthInstallApImg4GetPayloadPropertiesData
// address: 0x27a098
// body: available
// range: 0x27a098-0x27a4fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x27a4fa to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMAuthInstallApImg4GetPayloadPropertiesData
          (undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  long lVar11;
  char *pcVar12;
  undefined4 uVar13;
  void *pvVar14;
  undefined4 local_15c;
  undefined8 local_158;
  void *local_150;
  long local_148;
  undefined4 local_13c;
  char local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_158 = 0;
  if (param_2 == (long *)0x0) {
    pcVar12 = "dstData cannot be NULL";
  }
  else if (param_3 == 0) {
    pcVar12 = "imageTag cannot be NULL";
  }
  else {
    if (param_4 != 0) {
      lVar4 = _CFDictionaryGetCount(param_4);
      pvVar5 = (void *)0x0;
      if (lVar4 < 1) {
        pvVar14 = (void *)0x0;
        lVar4 = 0;
        lVar7 = 0;
        local_148 = 0;
LAB_0027a374:
        uVar13 = 0;
      }
      else {
        local_148 = _DEREncoderCreate(1);
        if (local_148 == 0) {
          pvVar5 = (void *)0x0;
          local_148 = 0;
          pvVar14 = (void *)0x0;
        }
        else {
          pvVar5 = _malloc(lVar4 * 8);
          pvVar6 = _malloc(lVar4 * 8);
          _CFDictionaryGetKeysAndValues(param_4,pvVar5,pvVar6);
          lVar7 = _CFArrayCreateMutable(param_1,0,PTR__kCFTypeArrayCallBacks_004411a8);
          pvVar14 = pvVar6;
          if (lVar7 != 0) {
            local_13c = 99;
            lVar7 = 0;
            local_150 = pvVar6;
            do {
              lVar11 = *(long *)((long)pvVar5 + lVar7 * 8);
              pvVar14 = local_150;
              if (lVar11 == 0) {
LAB_0027a405:
                lVar7 = 0;
                lVar4 = 0;
                uVar13 = 1;
                goto LAB_0027a377;
              }
              lVar8 = _CFGetTypeID(lVar11);
              lVar9 = _CFStringGetTypeID();
              pvVar14 = local_150;
              if ((lVar8 != lVar9) || (pvVar14 = pvVar6, *(long *)((long)pvVar6 + lVar7 * 8) == 0))
              goto LAB_0027a405;
              lVar8 = _CFGetTypeID();
              lVar9 = _CFDataGetTypeID();
              if (lVar8 == lVar9) {
                local_13c = _AMAuthInstallApImg4AddDataProperty(local_148,lVar11);
              }
              else {
                lVar8 = _CFGetTypeID(*(undefined8 *)((long)pvVar6 + lVar7 * 8));
                lVar9 = _CFBooleanGetTypeID();
                if (lVar8 == lVar9) {
                  uVar1 = _CFBooleanGetValue();
                  local_13c = _AMAuthInstallApImg4AddBooleanProperty(local_148,lVar11,uVar1);
                }
                else {
                  lVar8 = _CFGetTypeID(*(undefined8 *)((long)pvVar6 + lVar7 * 8));
                  lVar9 = _CFNumberGetTypeID();
                  if (lVar8 == lVar9) {
                    local_13c = _AMAuthInstallApImg4AddInteger64Property
                                          (local_148,lVar11,
                                           *(undefined8 *)((long)local_150 + lVar7 * 8));
                  }
                }
              }
              lVar7 = lVar7 + 1;
            } while (lVar4 != lVar7);
            lVar7 = 0;
            lVar4 = _DEREncoderCreate(0);
            uVar13 = 2;
            if (lVar4 == 0) {
              lVar4 = 0;
              pvVar14 = local_150;
              goto LAB_0027a377;
            }
            cVar2 = _CFStringGetCString(param_3,local_138,0x100,0x8000100);
            pvVar14 = local_150;
            if (cVar2 != '\0') {
              sVar10 = _strlen(local_138);
              iVar3 = _DEREncoderAddData(lVar4,0,0x16,local_138,sVar10 & 0xffffffff,0);
              if (iVar3 != 0) {
                lVar7 = 0;
                _AMAuthInstallLog(3,"AMAuthInstallApImg4GetPayloadPropertiesData",
                                  "failed to add %@ string",param_3);
                uVar13 = local_13c;
                goto LAB_0027a377;
              }
            }
            iVar3 = _DEREncoderAddSetFromEncoder(local_148,lVar4);
            if (iVar3 == 0) {
              lVar7 = _DEREncoderCreate(0);
              if (lVar7 == 0) {
                lVar7 = 0;
                goto LAB_0027a377;
              }
              iVar3 = _DEREncoderAddSequenceFromEncoder(lVar4,lVar7);
              if (iVar3 == 0) {
                iVar3 = _DEREncoderCreateEncodedBuffer(lVar7,&local_158,&local_15c);
                if (iVar3 != 0) {
                  uVar13 = 3;
                  goto LAB_0027a377;
                }
                lVar11 = _CFDataCreate(0,local_158,local_15c);
                *param_2 = lVar11;
                if (lVar11 == 0) goto LAB_0027a377;
                goto LAB_0027a374;
              }
              pcVar12 = "failed to encode restore info sequence";
            }
            else {
              pcVar12 = "failed to encode properties list as set";
              lVar7 = 0;
            }
            _AMAuthInstallLog(3,"AMAuthInstallApImg4GetPayloadPropertiesData",pcVar12);
            uVar13 = local_13c;
            goto LAB_0027a377;
          }
        }
        lVar4 = 0;
        lVar7 = 0;
        uVar13 = 2;
      }
      goto LAB_0027a377;
    }
    pcVar12 = "requestDict cannot be NULL";
  }
  pvVar5 = (void *)0x0;
  _AMAuthInstallLog(3,"AMAuthInstallApImg4GetPayloadPropertiesData",pcVar12);
  pvVar14 = (void *)0x0;
  lVar4 = 0;
  lVar7 = 0;
  local_148 = 0;
  uVar13 = 1;
LAB_0027a377:
  _DEREncoderDestroy(local_148);
  _DEREncoderDestroy(0);
  _DEREncoderDestroy(lVar4);
  _DEREncoderDestroy(lVar7);
  _SafeFree(local_158);
  _SafeFree(pvVar5);
  _SafeFree(pvVar14);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

