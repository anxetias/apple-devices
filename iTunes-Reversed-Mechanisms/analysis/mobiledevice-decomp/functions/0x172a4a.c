// rea decompile_all
// name: _unzReadCurrentFile
// address: 0x172a4a
// body: available
// range: 0x172a4a-0x172cd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _unzReadCurrentFile(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  Bytef *buf;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  uLong uVar6;
  int iVar7;
  uint len;
  ulong uVar8;
  
  iVar7 = -0x66;
  if ((param_1 != 0) && (plVar1 = *(long **)(param_1 + 0x140), plVar1 != (long *)0x0)) {
    if (*plVar1 == 0) {
      iVar7 = -100;
    }
    else {
      iVar7 = 0;
      if (param_3 != 0) {
        plVar1[4] = param_2;
        *(uint *)(plVar1 + 5) = param_3;
        uVar8 = (ulong)param_3;
        if (((ulong)plVar1[0x18] < uVar8) && ((int)plVar1[0x27] == 0)) {
          param_3 = (uint)plVar1[0x18];
          *(uint *)(plVar1 + 5) = param_3;
        }
        if ((plVar1[0x17] + (ulong)*(uint *)(plVar1 + 2) < uVar8) && ((int)plVar1[0x27] != 0)) {
          param_3 = (int)plVar1[0x17] + *(uint *)(plVar1 + 2);
          *(uint *)(plVar1 + 5) = param_3;
        }
        iVar7 = 0;
        if (param_3 != 0) {
          iVar7 = 0;
          do {
            uVar8 = (ulong)*(uint *)(plVar1 + 2);
            if (*(uint *)(plVar1 + 2) == 0) {
              uVar8 = plVar1[0x17];
              if (uVar8 == 0) {
                uVar8 = 0;
              }
              else {
                if (0x3fff < uVar8) {
                  uVar8 = 0x4000;
                }
                pcVar3 = (code *)plVar1[0x1d];
                if (pcVar3 == (code *)0x0) {
                  pcVar3 = (code *)plVar1[0x23];
                }
                lVar4 = (*pcVar3)(plVar1[0x20],plVar1[0x24],plVar1[0x26] + plVar1[0xf],0);
                if (lVar4 != 0) {
                  return -1;
                }
                uVar5 = (*(code *)plVar1[0x1a])(plVar1[0x20],plVar1[0x24],*plVar1);
                if (uVar5 != uVar8) {
                  return -1;
                }
                plVar1[0xf] = plVar1[0xf] + uVar8;
                plVar1[0x17] = plVar1[0x17] - uVar8;
                plVar1[1] = *plVar1;
                *(int *)(plVar1 + 2) = (int)uVar8;
              }
            }
            if ((plVar1[0x25] == 0) || ((int)plVar1[0x27] != 0)) {
              len = (uint)uVar8;
              if ((len == 0) && (plVar1[0x17] == 0)) {
                return iVar7;
              }
              if (*(uint *)(plVar1 + 5) < len) {
                len = *(uint *)(plVar1 + 5);
              }
              if (len == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = (ulong)len;
                uVar5 = 0;
                do {
                  *(undefined1 *)(plVar1[4] + uVar5) = *(undefined1 *)(plVar1[1] + uVar5);
                  uVar5 = uVar5 + 1;
                } while (uVar8 != uVar5);
              }
              plVar1[0x14] = plVar1[0x14] + uVar8;
              uVar6 = _crc32(plVar1[0x15],(Bytef *)plVar1[4],len);
              plVar1[0x15] = uVar6;
              plVar1[0x18] = plVar1[0x18] - uVar8;
              *(uint *)(plVar1 + 2) = (int)plVar1[2] - len;
              *(uint *)(plVar1 + 5) = (int)plVar1[5] - len;
              plVar1[4] = plVar1[4] + uVar8;
              plVar1[1] = plVar1[1] + uVar8;
              plVar1[6] = plVar1[6] + uVar8;
              iVar7 = iVar7 + len;
            }
            else if (plVar1[0x25] != 0xc) {
              buf = (Bytef *)plVar1[4];
              lVar4 = plVar1[6];
              iVar2 = _inflate((z_streamp)(plVar1 + 1),2);
              if ((-1 < iVar2) && (plVar1[7] != 0)) {
                iVar2 = -3;
              }
              lVar4 = plVar1[6] - lVar4;
              plVar1[0x14] = plVar1[0x14] + lVar4;
              uVar6 = _crc32(plVar1[0x15],buf,(uInt)lVar4);
              plVar1[0x15] = uVar6;
              plVar1[0x18] = plVar1[0x18] - lVar4;
              iVar7 = iVar7 + (uInt)lVar4;
              if (iVar2 != 0) {
                if (iVar2 == 1) {
                  return iVar7;
                }
                return iVar2;
              }
            }
          } while ((int)plVar1[5] != 0);
        }
      }
    }
  }
  return iVar7;
}

