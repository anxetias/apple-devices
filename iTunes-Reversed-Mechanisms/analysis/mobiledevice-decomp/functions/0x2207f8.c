// rea decompile_all
// name: std::stringbuf::seekoff
// address: 0x2207f8
// body: available
// range: 0x2207f8-0x220912 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::stringbuf::seekoff(long long, std::ios_base::seekdir, unsigned int) */

void std::stringbuf::seekoff(undefined8 *param_1,long param_2,long param_3,int param_4,byte param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_2 + 0x30);
  uVar4 = *(ulong *)(param_2 + 0x58);
  if (*(ulong *)(param_2 + 0x58) < uVar1) {
    *(ulong *)(param_2 + 0x58) = uVar1;
    uVar4 = uVar1;
  }
  lVar3 = -1;
  if (((param_5 & 0x18) != 0) && (param_4 != 1 || (param_5 & 0x18) != 0x18)) {
    if (uVar4 == 0) {
      lVar5 = 0;
    }
    else {
      if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
        lVar5 = param_2 + 0x41;
      }
      else {
        lVar5 = *(long *)(param_2 + 0x50);
      }
      lVar5 = uVar4 - lVar5;
    }
    if (param_4 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar5;
      if (param_4 != 2) {
        if (param_4 != 1) goto LAB_002208e9;
        if ((param_5 & 8) == 0) {
          lVar2 = uVar1 - *(long *)(param_2 + 0x28);
        }
        else {
          lVar2 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        }
      }
    }
    lVar2 = lVar2 + param_3;
    if ((lVar2 <= lVar5 && -1 < lVar2) &&
       ((lVar2 == 0 ||
        ((((param_5 & 8) == 0 || (*(long *)(param_2 + 0x18) != 0)) &&
         ((param_5 >> 4 & uVar1 == 0) == 0)))))) {
      if ((param_5 & 8) != 0) {
        *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x10) + lVar2;
        *(ulong *)(param_2 + 0x20) = uVar4;
      }
      lVar3 = lVar2;
      if ((param_5 & 0x10) != 0) {
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x28) + lVar2;
      }
    }
  }
LAB_002208e9:
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x10] = lVar3;
  return;
}

