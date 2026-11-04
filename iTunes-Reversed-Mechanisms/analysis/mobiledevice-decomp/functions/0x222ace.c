// rea decompile_all
// name: _Img4DecodeEvaluateCertificatePropertiesInternal
// address: 0x222ace
// body: available
// range: 0x222ace-0x222d68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _Img4DecodeEvaluateCertificatePropertiesInternal(long param_1,undefined4 *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  void *local_68;
  size_t sStack_60;
  undefined8 local_58;
  void *pvStack_50;
  size_t local_48;
  long local_40;
  undefined4 *local_38;
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_40 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_48 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_68 = (void *)0x0;
  sStack_60 = 0;
  local_98 = 0;
  lStack_90 = 0;
  if (param_1 == 0) {
    uStack_120 = 6;
  }
  else if (*(long *)(param_1 + 0x140) == 0) {
    uStack_120 = 3;
  }
  else {
    local_38 = param_2;
    uStack_120 = _DERDecodeSeqInit(param_1 + 0x138,&local_40,&local_b8);
    if (((int)uStack_120 == 0) && (uStack_120 = 2, local_40 == 0x2000000000000011)) {
      plVar1 = (long *)(param_1 + 0x48);
LAB_00222ba6:
      do {
        iVar2 = _DERDecodeSeqNext(&local_b8,&local_88);
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            return 0;
          }
          return 0xffffffffffffffff;
        }
        plVar3 = (long *)(param_1 + 0x38);
        if (local_88 != -0x1fffffffb2beb1b0) {
          if (local_88 == -0x1fffffff929e9188) {
            if (local_38 != (undefined4 *)0x0) {
              *local_38 = (undefined4)uStack_80;
              local_38[1] = uStack_80._4_4_;
              local_38[2] = (undefined4)local_78;
              local_38[3] = local_78._4_4_;
            }
            goto LAB_00222ba6;
          }
          if (local_88 != -0x1fffffffb0bdb5b0) {
            return 2;
          }
          plVar3 = plVar1;
          if ((*plVar1 == 0) && (*(long *)(param_1 + 0x50) == 0)) goto LAB_00222ba6;
        }
        local_98 = *plVar3;
        lStack_90 = plVar3[1];
        uVar4 = _DERImg4DecodeProperty(&uStack_80,local_88,&local_e8);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (lStack_c0 != 0x2000000000000011) {
          return 2;
        }
        uVar4 = _DERDecodeSeqContentInit(&uStack_d0,&local_a8);
LAB_00222c54:
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        iVar2 = _DERDecodeSeqNext(&local_a8,&local_58);
        if (iVar2 == 0) {
          uVar4 = _DERImg4DecodeProperty(&pvStack_50,local_58,&local_118);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar4 = _DERImg4DecodeContentFindItemWithTag(&local_98,local_58,&local_68);
          if ((4 < uStack_f0) || ((0x16UL >> (uStack_f0 & 0x3f) & 1) == 0)) goto LAB_00222ce3;
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (local_48 != sStack_60) {
            return 0xffffffffffffffff;
          }
          iVar2 = _memcmp(pvStack_50,local_68,local_48);
          if (iVar2 != 0) {
            return 0xffffffffffffffff;
          }
          goto LAB_00222d0a;
        }
        if (iVar2 != 1) {
          return 0xffffffffffffffff;
        }
      } while( true );
    }
  }
  return uStack_120;
LAB_00222ce3:
  if (uStack_f0 != 0xa000000000000000) {
    if (uStack_f0 != 0xa000000000000001) {
      return 2;
    }
    if ((int)uVar4 != 1) {
      return 2;
    }
LAB_00222d0a:
    uVar4 = 0;
  }
  goto LAB_00222c54;
}

