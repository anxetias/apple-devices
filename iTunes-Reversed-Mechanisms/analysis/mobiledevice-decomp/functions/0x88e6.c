// rea decompile_all
// name: __base64decode
// address: 0x88e6
// body: available
// range: 0x88e6-0x89d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __base64decode(byte *param_1,uint param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  if ((int)param_2 < 0) {
    uVar2 = _strlen((char *)param_1);
  }
  else {
    uVar2 = (ulong)param_2;
  }
  pbVar3 = param_1;
  if (0 < (long)uVar2) {
    uVar7 = 0;
    pbVar4 = param_1;
    uVar8 = 0;
    do {
      bVar1 = *pbVar4;
      if ((bVar1 == 10) || (bVar1 == 0xd)) {
        uVar5 = 0;
LAB_0000893b:
        uVar7 = 0;
        uVar6 = uVar5;
      }
      else {
        uVar5 = *(uint *)(&__base64decode_table + (ulong)bVar1 * 4);
        uVar6 = uVar8;
        if (uVar5 != 0xffffffff) {
          uVar6 = uVar5;
          switch(uVar7) {
          case 0:
            uVar7 = 1;
            break;
          case 1:
            *pbVar3 = ((byte)(uVar5 >> 4) & 3) + (char)uVar8 * '\x04';
            pbVar3 = pbVar3 + 1;
            uVar7 = 2;
            break;
          case 2:
            *pbVar3 = (byte)(uVar5 >> 2) & 0xf | (byte)(uVar8 << 4);
            pbVar3 = pbVar3 + 1;
            uVar7 = 3;
            break;
          case 3:
            *pbVar3 = (byte)(uVar8 << 6) | (byte)uVar5;
            pbVar3 = pbVar3 + 1;
            goto LAB_0000893b;
          }
        }
      }
      pbVar4 = pbVar4 + 1;
      uVar8 = uVar6;
    } while (pbVar4 < param_1 + uVar2);
  }
  *pbVar3 = 0;
  return (int)pbVar3 - (int)param_1;
}

