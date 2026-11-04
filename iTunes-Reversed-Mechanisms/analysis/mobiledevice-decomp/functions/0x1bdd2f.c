// rea decompile_all
// name: _amai_unzReadCurrentFile
// address: 0x1bdd2f
// body: available
// range: 0x1bdd2f-0x1be07d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _amai_unzReadCurrentFile(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  Bytef *buf;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uLong uVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  uInt len;
  uint len_00;
  ulong uVar10;
  
  iVar9 = -0x66;
  if ((param_1 != 0) && (plVar1 = *(long **)(param_1 + 0x120), plVar1 != (long *)0x0)) {
    if (*plVar1 == 0) {
      iVar9 = -100;
    }
    else {
      iVar9 = 0;
      if (param_3 != 0) {
        plVar1[4] = param_2;
        *(uint *)(plVar1 + 5) = param_3;
        uVar10 = (ulong)param_3;
        if (((ulong)plVar1[0x17] < uVar10) && ((int)plVar1[0x23] == 0)) {
          param_3 = (uint)plVar1[0x17];
          *(uint *)(plVar1 + 5) = param_3;
        }
        if ((plVar1[0x16] + (ulong)*(uint *)(plVar1 + 2) < uVar10) && ((int)plVar1[0x23] != 0)) {
          param_3 = (int)plVar1[0x16] + *(uint *)(plVar1 + 2);
          *(uint *)(plVar1 + 5) = param_3;
        }
        if (param_3 != 0) {
          iVar9 = 0;
          do {
            uVar10 = (ulong)*(uint *)(plVar1 + 2);
            if (*(uint *)(plVar1 + 2) == 0) {
              uVar10 = plVar1[0x16];
              if (uVar10 == 0) {
                uVar10 = 0;
              }
              else {
                if (0x3fff < uVar10) {
                  uVar10 = 0x4000;
                }
                lVar3 = (*(code *)plVar1[0x1c])
                                  (plVar1[0x1f],plVar1[0x20],plVar1[0x22] + plVar1[0xf],0);
                if (lVar3 != 0) {
                  return -1;
                }
                uVar4 = (*(code *)plVar1[0x19])(plVar1[0x1f],plVar1[0x20],*plVar1);
                if (uVar4 != uVar10) {
                  return -1;
                }
                if (*(int *)(param_1 + 0x128) != 0) {
                  uVar4 = 0;
                  do {
                    lVar3 = *(long *)(param_1 + 0x148);
                    bVar6 = (byte)((*(uint *)(param_1 + 0x140) & 0xfffd ^ 3) *
                                   (*(uint *)(param_1 + 0x140) | 2) >> 8) ^
                            *(byte *)(*plVar1 + uVar4);
                    *(byte *)(*plVar1 + uVar4) = bVar6;
                    uVar7 = *(ulong *)(param_1 + 0x130) >> 8 ^
                            *(ulong *)(lVar3 + (ulong)(byte)((byte)*(ulong *)(param_1 + 0x130) ^
                                                            bVar6) * 8);
                    *(ulong *)(param_1 + 0x130) = uVar7;
                    lVar8 = ((uVar7 & 0xff) + *(long *)(param_1 + 0x138)) * 0x8088405 + 1;
                    *(long *)(param_1 + 0x138) = lVar8;
                    *(ulong *)(param_1 + 0x140) =
                         *(ulong *)(param_1 + 0x140) >> 8 ^
                         *(ulong *)(lVar3 + (ulong)(((uint)*(ulong *)(param_1 + 0x140) ^
                                                    (uint)((ulong)lVar8 >> 0x18) & 0xff) & 0xff) * 8
                                   );
                    *(byte *)(*plVar1 + uVar4) = bVar6;
                    uVar4 = uVar4 + 1;
                  } while (uVar10 != uVar4);
                }
                plVar1[0xf] = plVar1[0xf] + uVar10;
                plVar1[0x16] = plVar1[0x16] - uVar10;
                plVar1[1] = *plVar1;
                *(int *)(plVar1 + 2) = (int)uVar10;
              }
            }
            if ((plVar1[0x21] == 0) || ((int)plVar1[0x23] != 0)) {
              len_00 = (uint)uVar10;
              if ((len_00 == 0) && (plVar1[0x16] == 0)) {
                return iVar9;
              }
              if (*(uint *)(plVar1 + 5) < len_00) {
                len_00 = *(uint *)(plVar1 + 5);
              }
              if (len_00 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = (ulong)len_00;
                uVar4 = 0;
                do {
                  *(undefined1 *)(plVar1[4] + uVar4) = *(undefined1 *)(plVar1[1] + uVar4);
                  uVar4 = uVar4 + 1;
                } while (uVar10 != uVar4);
              }
              uVar5 = _crc32(plVar1[0x14],(Bytef *)plVar1[4],len_00);
              plVar1[0x14] = uVar5;
              plVar1[0x17] = plVar1[0x17] - uVar10;
              *(uint *)(plVar1 + 2) = (int)plVar1[2] - len_00;
              iVar2 = (int)plVar1[5] - len_00;
              *(int *)(plVar1 + 5) = iVar2;
              plVar1[4] = plVar1[4] + uVar10;
              plVar1[1] = plVar1[1] + uVar10;
              plVar1[6] = plVar1[6] + uVar10;
              iVar9 = iVar9 + len_00;
            }
            else {
              buf = (Bytef *)plVar1[4];
              lVar3 = plVar1[6];
              iVar2 = _inflate((z_streamp)(plVar1 + 1),2);
              if ((-1 < iVar2) && (plVar1[7] != 0)) {
                lVar3 = plVar1[6] - lVar3;
                uVar5 = _crc32(plVar1[0x14],buf,(uInt)lVar3);
                plVar1[0x14] = uVar5;
                plVar1[0x17] = plVar1[0x17] - lVar3;
                return -3;
              }
              lVar3 = plVar1[6] - lVar3;
              len = (uInt)lVar3;
              uVar5 = _crc32(plVar1[0x14],buf,len);
              plVar1[0x14] = uVar5;
              plVar1[0x17] = plVar1[0x17] - lVar3;
              iVar9 = iVar9 + len;
              if (iVar2 != 0) {
                if (iVar2 == 1) {
                  return iVar9;
                }
                return iVar2;
              }
              iVar2 = (int)plVar1[5];
            }
          } while (iVar2 != 0);
        }
      }
    }
  }
  return iVar9;
}

