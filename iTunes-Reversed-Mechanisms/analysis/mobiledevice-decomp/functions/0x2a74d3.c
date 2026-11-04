// rea decompile_all
// name: _Img4DecodeEvaluateCertificateChain
// address: 0x2a74d3
// body: available
// range: 0x2a74d3-0x2a77ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int _Img4DecodeEvaluateCertificateChain
              (long param_1,long param_2,code *param_3,long param_4,undefined8 param_5,
              undefined8 *param_6,undefined8 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8 [4];
  undefined8 local_a8;
  code *local_a0;
  undefined8 local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  local_e8 = 0;
  uStack_e0 = 0;
  local_50 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8[2] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  local_40 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_78 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_88 = 0;
  uStack_80 = 0;
  iVar1 = 6;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (code *)0x0)) &&
     (((param_4 != 0 && (param_7 != (undefined8 *)0x0)) &&
      ((param_6 != (undefined8 *)0x0 && (*(code **)(param_4 + 8) != (code *)0x0)))))) {
    local_a8 = param_5;
    (**(code **)(param_4 + 8))
              (param_1,param_2,&local_40,&local_48,&local_98,&lStack_90,param_4,param_5);
    if (lStack_90 == 0) {
      iVar1 = 3;
    }
    else {
      iVar1 = _DERDecodeSeqInit(&local_98,&local_50,&local_e8,param_4);
      if ((iVar1 == 0) && (iVar1 = 2, local_50 == 0x2000000000000011)) {
        local_a0 = param_3;
        do {
          while( true ) {
            iVar1 = _DERDecodeSeqNext(&local_e8,local_c8);
            if (iVar1 != 0) {
              if (iVar1 != 1) {
                return -1;
              }
              *param_7 = local_48;
              *param_6 = local_40;
              return 0;
            }
            if (local_c8[0] != -0x1fffffffb2beb1b0) break;
            uVar2 = 0;
LAB_002a76a2:
            local_38 = param_6;
            iVar1 = _DERImg4DecodeProperty(local_c8 + 1,local_c8[0],&local_118);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (lStack_f0 != 0x2000000000000011) goto LAB_002a77bc;
            iVar1 = _DERDecodeSeqContentInit(&uStack_100,&local_d8);
            while( true ) {
              if (iVar1 != 0) {
                return iVar1;
              }
              iVar1 = _DERDecodeSeqNext(&local_d8,&local_68);
              if (iVar1 != 0) break;
              iVar1 = _DERImg4DecodeProperty(&uStack_60,local_68,&local_148);
              if (iVar1 != 0) {
                return iVar1;
              }
              if (((0x16 < uStack_120) || ((0x400016UL >> (uStack_120 & 0x3f) & 1) == 0)) &&
                 (1 < uStack_120 + 0x6000000000000000)) goto LAB_002a77bc;
              local_88 = uStack_60;
              uStack_80 = CONCAT44(uStack_80._4_4_,(undefined4)local_58);
              local_78 = uStack_120;
              iVar1 = (*local_a0)(local_68 & 0xffffffff,&local_88,uVar2,local_a8);
            }
            param_6 = local_38;
            if (iVar1 != 1) {
              return -1;
            }
          }
        } while (local_c8[0] == -0x1fffffff929e9188);
        if (local_c8[0] == -0x1fffffffb0bdb5b0) {
          uVar2 = 1;
          goto LAB_002a76a2;
        }
LAB_002a77bc:
        iVar1 = 2;
      }
    }
  }
  return iVar1;
}

