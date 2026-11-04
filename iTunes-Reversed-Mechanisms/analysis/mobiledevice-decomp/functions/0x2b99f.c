// rea decompile_all
// name: _vng_aes_encrypt_key256
// address: 0x2b99f
// body: available
// range: 0x2b99f-0x2b9cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _vng_aes_encrypt_key256(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  param_2[0x3c] = 0xe0;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar7 = param_1[7];
  pbVar5 = &_AESRcon;
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar7;
  lVar6 = -0xe0;
  while( true ) {
    pbVar5 = pbVar5 + 1;
    uVar7 = *(uint *)((long)param_2 + lVar6 + 0xe0) ^ (uint)*pbVar5 ^
            *(uint *)(&DAT_002b3e9c + ((ulong)uVar7 & 0xff) * 4) ^
            *(uint *)(&_AESSubBytesWordTable + (ulong)(byte)(uVar7 >> 8) * 4) ^
            *(uint *)(&DAT_002b369c + (ulong)(byte)(uVar7 >> 0x10) * 4) ^
            *(uint *)(&DAT_002b3a9c + (ulong)(byte)(uVar7 >> 0x18) * 4);
    *(uint *)((long)param_2 + lVar6 + 0x100) = uVar7;
    uVar7 = *(uint *)((long)param_2 + lVar6 + 0xe4) ^ uVar7;
    *(uint *)((long)param_2 + lVar6 + 0x104) = uVar7;
    uVar7 = *(uint *)((long)param_2 + lVar6 + 0xe8) ^ uVar7;
    *(uint *)((long)param_2 + lVar6 + 0x108) = uVar7;
    uVar7 = *(uint *)((long)param_2 + lVar6 + 0xec) ^ uVar7;
    *(uint *)((long)param_2 + lVar6 + 0x10c) = uVar7;
    if (lVar6 + 0x20 == 0) break;
    uVar7 = *(uint *)((long)param_2 + lVar6 + 0xf0) ^
            *(uint *)(&_AESSubBytesWordTable + (ulong)(byte)uVar7 * 4) ^
            *(uint *)(&DAT_002b369c + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_002b3a9c + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_002b3e9c + (ulong)(uVar7 >> 0x18) * 4);
    *(uint *)((long)param_2 + lVar6 + 0x110) = uVar7;
    uVar7 = *(uint *)((long)param_2 + lVar6 + 0xf4) ^ uVar7;
    *(uint *)((long)param_2 + lVar6 + 0x114) = uVar7;
    uVar7 = *(uint *)((long)param_2 + lVar6 + 0xf8) ^ uVar7;
    *(uint *)((long)param_2 + lVar6 + 0x118) = uVar7;
    uVar7 = *(uint *)((long)param_2 + lVar6 + 0xfc) ^ uVar7;
    *(uint *)((long)param_2 + lVar6 + 0x11c) = uVar7;
    lVar6 = lVar6 + 0x20;
  }
  return 0;
}

