// rea decompile_all
// name: __Img4DecodePerformTrustEvaluationWithCallbacksInternal
// address: 0x222d69
// body: available
// range: 0x222d69-0x223059 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __Img4DecodePerformTrustEvaluationWithCallbacksInternal
              (uint param_1,undefined1 *param_2,long *param_3,undefined8 *param_4,undefined4 param_5
              ,undefined8 param_6)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  long *local_40;
  undefined4 local_34;
  
  local_58 = 0;
  local_50 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  iVar3 = 6;
  if (((((((param_2 != (undefined1 *)0x0) && (param_3 != (long *)0x0)) &&
         (param_4 != (undefined8 *)0x0)) && ((*param_3 != 0 && ((code *)*param_4 != (code *)0x0))))
       && ((param_4[3] != 0 && ((param_4[1] != 0 && (param_4[2] != 0)))))) &&
      ((ulong *)param_4[4] != (ulong *)0x0)) && (*(long *)(param_2 + 0x18) != 0)) {
    uVar1 = *(ulong *)param_4[4];
    iVar3 = 7;
    if (uVar1 < 0x31) {
      local_44 = param_1;
      local_40 = param_3;
      local_34 = param_5;
      iVar3 = (*(code *)*param_4)(*(long *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                                  param_2 + 0x148,uVar1,param_4);
      if (iVar3 == 0) {
        param_2[1] = 1;
        if ((((code *)local_40[1] == (code *)0x0) ||
            (pvVar4 = (void *)(*(code *)local_40[1])(param_2,param_6), pvVar4 == (void *)0x0)) ||
           (iVar3 = _memcmp(param_2 + 0x148,pvVar4,*(size_t *)param_4[4]), iVar3 != 0)) {
          iVar3 = (*(code *)param_4[1])
                            (*(undefined8 *)(param_2 + 0x128),*(undefined8 *)(param_2 + 0x130),
                             &local_50,&local_58,param_2 + 0x138,param_2 + 0x140,param_4,param_6);
          if (iVar3 != 0) {
            return iVar3;
          }
          if (0x30 < *(ulong *)param_4[4]) {
            return 7;
          }
          iVar3 = (*(code *)*param_4)(*(undefined8 *)(param_2 + 0x108),
                                      *(undefined8 *)(param_2 + 0x110),param_2 + 0x178,
                                      *(ulong *)param_4[4],param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar5 = *(undefined8 *)(param_2 + 0x120);
          iVar3 = (*(code *)param_4[2])
                            (local_50,local_58,*(undefined8 *)(param_2 + 0x118),uVar5,
                             param_2 + 0x178,*(undefined8 *)param_4[4],param_4,param_6);
          local_48 = (undefined4)CONCAT71((int7)((ulong)uVar5 >> 8),1);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
        else {
          local_48 = 0;
        }
        local_60 = param_2 + 0x38;
        iVar3 = _DERImg4DecodeParseManifestProperties(param_2,param_2 + 0x28);
        if (iVar3 == 0) {
          if ((char)local_34 == '\0') {
            if ((code *)local_40[2] == (code *)0x0) {
              iVar3 = _DERImg4DecodeFindProperty
                                (param_2 + 0x28,(ulong)local_44 | 0xe000000000000000,
                                 0x2000000000000011,&local_98);
            }
            else {
              iVar3 = (*(code *)local_40[2])();
            }
            if (iVar3 != 0) {
              return iVar3;
            }
            *(undefined4 *)(param_2 + 0x48) = (undefined4)uStack_80;
            *(undefined4 *)(param_2 + 0x4c) = uStack_80._4_4_;
            *(undefined4 *)(param_2 + 0x50) = (undefined4)local_78;
            *(undefined4 *)(param_2 + 0x54) = local_78._4_4_;
          }
          if ((((char)local_48 == '\0') ||
              (iVar3 = (*(code *)param_4[3])(param_2,param_6), iVar3 == 0)) &&
             (plVar2 = local_40, iVar3 = 7, *(ulong *)param_4[4] < 0x31)) {
            if ((*(long *)(param_2 + 0x88) != 0) && (*(long *)(param_2 + 0x90) != 0)) {
              iVar3 = (*(code *)*param_4)(*(undefined8 *)(param_2 + 8),
                                          *(undefined8 *)(param_2 + 0x10),param_2 + 0xb8,
                                          *(ulong *)param_4[4],param_4);
              if (iVar3 != 0) {
                return iVar3;
              }
              *param_2 = 1;
            }
            iVar3 = _Img4DecodeEvaluateDictionaryProperties(local_60,0,*plVar2,param_6);
            if ((iVar3 == 0) &&
               (((char)local_34 != '\0' ||
                (iVar3 = _Img4DecodeEvaluateDictionaryProperties(param_2 + 0x48,1,*plVar2,param_6),
                iVar3 == 0)))) {
              iVar3 = 0;
            }
          }
        }
      }
    }
  }
  return iVar3;
}

