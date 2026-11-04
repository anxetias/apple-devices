// rea decompile_all
// name: _verify_chain_img4_v1
// address: 0x223626
// body: available
// range: 0x223626-0x223983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8
_verify_chain_img4_v1
          (long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4,long *param_5,
          long *param_6,undefined8 param_7)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  size_t *psVar7;
  long local_3f8;
  ulong local_3f0;
  undefined *local_3e8;
  undefined8 local_3e0;
  undefined1 local_3d8 [32];
  undefined1 local_3b8 [48];
  undefined1 local_388 [96];
  undefined1 local_328 [80];
  size_t local_2d8 [17];
  size_t local_250 [3];
  undefined1 local_238 [240];
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [32];
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98 [4];
  long local_78 [4];
  undefined8 *local_58;
  undefined8 *local_50;
  long *local_48;
  long *local_40;
  long local_38;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) &&
     (param_4 != (undefined8 *)0x0)) {
    local_58 = param_4;
    local_50 = param_3;
    local_48 = param_5;
    ___bzero(local_3d8,0x2f0);
    local_3f0 = param_2 & 0xffffffff;
    local_3e8 = &_ROOT_CA_CERTIFICATE;
    local_3e0 = 0x4bf;
    local_3f8 = param_1;
    iVar3 = __crack_chain_with_anchor(&local_3f8,&local_3e8,3);
    if (iVar3 == 0) {
      iVar3 = _parse_chain(&local_3e8,3,local_3b8,local_328,local_148,local_118);
      if (iVar3 == 0) {
        local_40 = param_6;
        psVar7 = local_250;
        puVar4 = local_388;
        uVar6 = 0;
        do {
          uVar5 = uVar6 & 0xffffffff;
          if (local_2d8[uVar5 * 0x14 + 1] != *psVar7) {
            return 0xffffffff;
          }
          iVar3 = _memcmp((void *)local_2d8[uVar5 * 0x14],(void *)psVar7[-1],
                          local_2d8[uVar5 * 0x14 + 1]);
          if (iVar3 != 0) {
            return 0xffffffff;
          }
          iVar3 = _verify_chain_signatures(local_148 + uVar5 * 0x10,puVar4,param_7);
          if (iVar3 != 0) {
            return 0xffffffff;
          }
          psVar7 = psVar7 + 0x14;
          puVar4 = puVar4 + 0x30;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 2);
        local_a8 = 0;
        uStack_a0 = 0;
        if ((undefined1 *)0xffffffffffffff5f < local_328) {
LAB_0022397f:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_b8 = 0;
        uStack_b0 = 0;
        local_78[0] = 0;
        local_78[1] = 0;
        local_78[2] = 0;
        iVar3 = _DERDecodeSeqContentInit(local_238);
        if (iVar3 == 0) {
          local_38 = 0x2000000000000011;
          do {
            iVar3 = _DERDecodeSeqNext(&local_b8,local_78);
            if (iVar3 != 0) {
              return 0xffffffff;
            }
            if (local_78[0] != local_38) {
              return 0xffffffff;
            }
            local_e8 = 0;
            uStack_e0 = 0;
            local_98[0] = 0;
            local_98[1] = 0;
            local_98[2] = 0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            iVar3 = _DERDecodeSeqContentInit(local_78 + 1,&local_e8);
            if (iVar3 != 0) {
              return 0xffffffff;
            }
            while (iVar3 = _DERDecodeSeqNext(&local_e8,local_98), iVar3 == 0) {
              if (local_98[0] != 0x2000000000000010) {
                return 0xffffffff;
              }
              iVar3 = _DERParseSequenceContentToObject
                                (local_98 + 1,2,&_DERAttributeTypeAndValueItemSpecs,&local_d8,0x20,
                                 0x20);
              if (iVar3 != 0) {
                return 0xffffffff;
              }
              cVar2 = _DEROidCompare(&_oidCommonName,&local_d8);
              if (cVar2 != '\0') {
                local_a8 = local_c8;
                uStack_a0 = uStack_c0;
                cVar2 = _DEROidCompare(&_verify_chain_img4_v1_sboot_item);
                if (cVar2 == '\0') {
                  return 0xffffffff;
                }
                if (local_148 < (undefined1 *)0xffffffffffffffe0) {
                  *local_50 = local_128;
                  *local_58 = local_120;
                  if (local_118 < (undefined1 *)0xffffffffffffffe0) {
                    if (local_f8 == 0) {
                      return 0;
                    }
                    if (local_f0 == 0) {
                      return 0;
                    }
                    if (local_40 == (long *)0x0 || local_48 == (long *)0x0) {
                      return 0;
                    }
                    *local_48 = local_f8;
                    *local_40 = local_f0;
                    return 0;
                  }
                }
                goto LAB_0022397f;
              }
            }
          } while (iVar3 == 1);
        }
      }
    }
  }
  return 0xffffffff;
}

