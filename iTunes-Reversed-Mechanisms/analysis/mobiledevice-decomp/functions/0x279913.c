// rea decompile_all
// name: _AMAuthInstallApImg4ReCreatePayloadWithProperties
// address: 0x279913
// body: available
// range: 0x279913-0x279d37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x279d33 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMAuthInstallApImg4ReCreatePayloadWithProperties
          (char *param_1,char *param_2,long param_3,long param_4,long param_5,long param_6,
          long param_7,undefined8 *param_8)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 local_1a0;
  undefined8 local_198;
  long local_190;
  long local_188;
  long local_180;
  undefined4 local_174;
  char *local_170;
  undefined1 local_168 [96];
  long local_108;
  undefined8 local_100;
  undefined1 local_c8 [16];
  char *local_b8;
  size_t local_b0;
  char *local_a8;
  size_t local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_174 = 1;
  local_190 = param_3;
  if (param_3 == 0) goto LAB_00279a7c;
  pcVar10 = (char *)0x0;
  lVar8 = 0;
  lVar9 = 0;
  lVar4 = 0;
  lVar5 = 0;
  pcVar7 = (char *)0x0;
  local_170 = param_2;
  if (param_8 == (undefined8 *)0x0) goto LAB_00279c5d;
  local_188 = param_6;
  local_180 = param_5;
  local_1a0 = _CFDataGetBytePtr(param_3);
  local_198 = _CFDataGetLength(param_3);
  ___bzero(local_c8,0x90);
  iVar3 = _DERImg4DecodePayload(&local_1a0,local_c8);
  if (iVar3 == 0) {
    local_174 = 2;
    if ((param_1 == (char *)0x0) ||
       (cVar2 = __DERItemEqualsCString(&local_b8,param_1), cVar2 != '\0')) {
      pcVar7 = local_170;
      if (local_b8 == (char *)0x0) goto LAB_00279a7c;
      pcVar10 = _strndup(local_b8,local_b0);
      bVar1 = false;
    }
    else {
      pcVar10 = _strdup(param_1);
      bVar1 = true;
      pcVar7 = local_170;
    }
    local_170 = pcVar10;
    if (pcVar10 != (char *)0x0) {
      if ((pcVar7 == (char *)0x0) ||
         (cVar2 = __DERItemEqualsCString(&local_a8,pcVar7), cVar2 != '\0')) {
        if (local_a8 != (char *)0x0) {
          pcVar10 = _strndup(local_a8,local_a0);
          goto LAB_00279a9c;
        }
LAB_00279af5:
        pcVar10 = (char *)0x0;
LAB_00279af8:
        lVar8 = 0;
      }
      else {
        pcVar10 = _strdup(pcVar7);
        bVar1 = true;
LAB_00279a9c:
        if (pcVar10 == (char *)0x0) goto LAB_00279af5;
        if (param_4 == 0) {
          if (local_98 != 0) {
            lVar8 = _CFDataCreateWithBytesNoCopy
                              (0,local_98,local_90,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
            goto LAB_00279ad7;
          }
          goto LAB_00279af8;
        }
        lVar8 = _CFRetain(param_4);
        bVar1 = true;
LAB_00279ad7:
        if (lVar8 == 0) goto LAB_00279af8;
        if (local_180 != 0) {
          lVar4 = _CFRetain();
          bVar1 = true;
LAB_00279b39:
          local_180 = lVar4;
          if (local_188 == 0) {
            if (local_78 == 0) {
              lVar5 = 0;
            }
            else {
              lVar9 = 0;
              lVar5 = _CFDataCreateWithBytesNoCopy
                                (0,local_78,local_70,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
              if (lVar5 == 0) {
                lVar5 = 0;
                lVar4 = local_180;
                pcVar7 = local_170;
                goto LAB_00279c5d;
              }
            }
          }
          else {
            lVar5 = _CFRetain();
            bVar1 = true;
          }
          if (param_7 == 0) {
            local_188 = lVar5;
            ___bzero(local_168,0xa0);
            iVar3 = _DERImg4DecodePayloadWithProperties(&local_1a0,local_168);
            if (iVar3 == 0) {
              if (local_108 == 0) {
                lVar9 = 0;
              }
              else {
                lVar9 = _CFDataCreateWithBytesNoCopy
                                  (0,local_108,local_100,
                                   *(undefined8 *)PTR__kCFAllocatorNull_004410f8);
                if (lVar9 == 0) {
                  lVar9 = 0;
                  lVar4 = local_180;
                  lVar5 = local_188;
                  pcVar7 = local_170;
                  goto LAB_00279c5d;
                }
              }
            }
            else {
              lVar9 = 0;
              _AMAuthInstallLog(7,"AMAuthInstallApImg4ReCreatePayloadWithProperties",
                                "failed to decode img4 payload with properties (error=%d), assuming no properties"
                                ,iVar3);
            }
            lVar5 = local_188;
            if (!bVar1) {
              uVar6 = _CFRetain(local_190);
              *param_8 = uVar6;
              local_174 = 0;
              lVar4 = local_180;
              lVar5 = local_188;
              pcVar7 = local_170;
              goto LAB_00279c5d;
            }
          }
          else {
            lVar9 = _CFRetain();
          }
          pcVar7 = local_170;
          local_174 = _AMAuthInstallApImg4CreatePayloadWithProperties
                                (local_170,pcVar10,lVar8,local_180,lVar5,lVar9,param_8);
          lVar4 = local_180;
          goto LAB_00279c5d;
        }
        if (local_88 == 0) {
          lVar4 = 0;
          goto LAB_00279b39;
        }
        lVar4 = _CFDataCreateWithBytesNoCopy
                          (0,local_88,local_80,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
        if (lVar4 != 0) goto LAB_00279b39;
      }
      lVar9 = 0;
      lVar4 = 0;
      lVar5 = 0;
      pcVar7 = local_170;
      goto LAB_00279c5d;
    }
  }
  else {
    _AMAuthInstallLog(3,"AMAuthInstallApImg4ReCreatePayloadWithProperties",
                      "failed to decode img4 payload, error:%d",iVar3);
    local_174 = 99;
  }
LAB_00279a7c:
  pcVar10 = (char *)0x0;
  lVar8 = 0;
  lVar9 = 0;
  lVar4 = 0;
  lVar5 = 0;
  pcVar7 = (char *)0x0;
LAB_00279c5d:
  _SafeFree(pcVar7);
  _SafeFree(pcVar10);
  _SafeRelease(lVar8);
  _SafeRelease(lVar4);
  _SafeRelease(lVar5);
  _SafeRelease(lVar9);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_174;
}

