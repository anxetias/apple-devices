// rea decompile_all
// name: EKeyHas6Words
// address: 0x2b864
// body: available
// range: 0x2b864-0x2b99e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 EKeyHas6Words(uint *param_1,uint *param_2)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  param_2[0x3c] = 0xc0;
  uVar7 = param_1[4];
  uVar8 = param_1[5];
  pbVar1 = &_AESRcon;
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  param_2[4] = uVar7;
  param_2[5] = uVar8;
  lVar2 = -0xc0;
  while( true ) {
    pbVar1 = pbVar1 + 1;
    uVar3 = uVar3 ^ *pbVar1 ^
            *(uint *)(&DAT_002b3e9c + (ulong)(byte)uVar8 * 4) ^
            *(uint *)(&_AESSubBytesWordTable + (ulong)(byte)(uVar8 >> 8) * 4) ^
            *(uint *)(&DAT_002b369c + (ulong)(byte)(uVar8 >> 0x10) * 4) ^
            *(uint *)(&DAT_002b3a9c + (ulong)(byte)(uVar8 >> 0x18) * 4);
    *(uint *)((long)param_2 + lVar2 + 0xd8) = uVar3;
    uVar4 = uVar4 ^ uVar3;
    *(uint *)((long)param_2 + lVar2 + 0xdc) = uVar4;
    uVar5 = uVar5 ^ uVar4;
    *(uint *)((long)param_2 + lVar2 + 0xe0) = uVar5;
    uVar6 = uVar6 ^ uVar5;
    *(uint *)((long)param_2 + lVar2 + 0xe4) = uVar6;
    if (lVar2 + 0x18 == 0) break;
    uVar7 = uVar7 ^ uVar6;
    *(uint *)((long)param_2 + lVar2 + 0xe8) = uVar7;
    uVar8 = uVar8 ^ uVar7;
    *(uint *)((long)param_2 + lVar2 + 0xec) = uVar8;
    lVar2 = lVar2 + 0x18;
  }
  return 0;
}

