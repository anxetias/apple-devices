// rea decompile_all
// name: _vng_aes_encrypt_opt_key
// address: 0x2b6b4
// body: available
// range: 0x2b6b4-0x2b728 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _vng_aes_encrypt_opt_key(uint *param_1,int param_2,uint *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_2 < 0x80) {
    param_2 = param_2 << 3;
  }
  if (param_2 == 0x80) {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar7 = param_1[2];
    uVar5 = param_1[3];
    param_3[0x3c] = 0xa0;
    *(byte *)(param_3 + 4) = 1;
    *(byte *)(param_3 + 8) = 2;
    *(byte *)(param_3 + 0xc) = 4;
    *(byte *)(param_3 + 0x10) = 8;
    *(byte *)(param_3 + 0x14) = 0x10;
    *(byte *)(param_3 + 0x18) = 0x20;
    *(byte *)(param_3 + 0x1c) = 0x40;
    *(byte *)(param_3 + 0x20) = 0x80;
    *(byte *)(param_3 + 0x24) = 0x1b;
    *(byte *)(param_3 + 0x28) = 0x36;
    *param_3 = uVar2;
    param_3[1] = uVar3;
    param_3[2] = uVar7;
    param_3[3] = uVar5;
    do {
      puVar4 = param_3 + 4;
      uVar9 = *puVar4;
      uVar2 = uVar2 ^ *(uint *)(&DAT_002b3e9c + ((ulong)uVar5 & 0xff) * 4) ^
              *(uint *)(&_AESSubBytesWordTable + (ulong)(byte)(uVar5 >> 8) * 4) ^
              *(uint *)(&DAT_002b369c + (ulong)(byte)(uVar5 >> 0x10) * 4) ^
              *(uint *)(&DAT_002b3a9c + (ulong)(byte)(uVar5 >> 0x18) * 4) ^ (uint)(byte)uVar9;
      *puVar4 = uVar2;
      uVar3 = uVar3 ^ uVar2;
      param_3[5] = uVar3;
      uVar7 = uVar7 ^ uVar3;
      param_3[6] = uVar7;
      uVar5 = uVar5 ^ uVar7;
      param_3[7] = uVar5;
      param_3 = puVar4;
    } while ((byte)uVar9 != 0x36);
    uVar1 = 0;
  }
  else {
    if (param_2 == 0xc0) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar7 = param_1[2];
      uVar5 = param_1[3];
      param_3[0x3c] = 0xc0;
      uVar9 = param_1[4];
      uVar10 = param_1[5];
      pbVar6 = &_AESRcon;
      *param_3 = uVar2;
      param_3[1] = uVar3;
      param_3[2] = uVar7;
      param_3[3] = uVar5;
      param_3[4] = uVar9;
      param_3[5] = uVar10;
      lVar8 = -0xc0;
      while( true ) {
        pbVar6 = pbVar6 + 1;
        uVar2 = uVar2 ^ *pbVar6 ^
                *(uint *)(&DAT_002b3e9c + (ulong)(byte)uVar10 * 4) ^
                *(uint *)(&_AESSubBytesWordTable + (ulong)(byte)(uVar10 >> 8) * 4) ^
                *(uint *)(&DAT_002b369c + (ulong)(byte)(uVar10 >> 0x10) * 4) ^
                *(uint *)(&DAT_002b3a9c + (ulong)(byte)(uVar10 >> 0x18) * 4);
        *(uint *)((long)param_3 + lVar8 + 0xd8) = uVar2;
        uVar3 = uVar3 ^ uVar2;
        *(uint *)((long)param_3 + lVar8 + 0xdc) = uVar3;
        uVar7 = uVar7 ^ uVar3;
        *(uint *)((long)param_3 + lVar8 + 0xe0) = uVar7;
        uVar5 = uVar5 ^ uVar7;
        *(uint *)((long)param_3 + lVar8 + 0xe4) = uVar5;
        if (lVar8 + 0x18 == 0) break;
        uVar9 = uVar9 ^ uVar5;
        *(uint *)((long)param_3 + lVar8 + 0xe8) = uVar9;
        uVar10 = uVar10 ^ uVar9;
        *(uint *)((long)param_3 + lVar8 + 0xec) = uVar10;
        lVar8 = lVar8 + 0x18;
      }
      return 0;
    }
    if (param_2 == 0x100) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar7 = param_1[2];
      uVar5 = param_1[3];
      param_3[0x3c] = 0xe0;
      *param_3 = uVar2;
      param_3[1] = uVar3;
      param_3[2] = uVar7;
      param_3[3] = uVar5;
      uVar2 = param_1[5];
      uVar3 = param_1[6];
      uVar7 = param_1[7];
      pbVar6 = &_AESRcon;
      param_3[4] = param_1[4];
      param_3[5] = uVar2;
      param_3[6] = uVar3;
      param_3[7] = uVar7;
      lVar8 = -0xe0;
      while( true ) {
        pbVar6 = pbVar6 + 1;
        uVar2 = *(uint *)((long)param_3 + lVar8 + 0xe0) ^ (uint)*pbVar6 ^
                *(uint *)(&DAT_002b3e9c + ((ulong)uVar7 & 0xff) * 4) ^
                *(uint *)(&_AESSubBytesWordTable + (ulong)(byte)(uVar7 >> 8) * 4) ^
                *(uint *)(&DAT_002b369c + (ulong)(byte)(uVar7 >> 0x10) * 4) ^
                *(uint *)(&DAT_002b3a9c + (ulong)(byte)(uVar7 >> 0x18) * 4);
        *(uint *)((long)param_3 + lVar8 + 0x100) = uVar2;
        uVar2 = *(uint *)((long)param_3 + lVar8 + 0xe4) ^ uVar2;
        *(uint *)((long)param_3 + lVar8 + 0x104) = uVar2;
        uVar2 = *(uint *)((long)param_3 + lVar8 + 0xe8) ^ uVar2;
        *(uint *)((long)param_3 + lVar8 + 0x108) = uVar2;
        uVar2 = *(uint *)((long)param_3 + lVar8 + 0xec) ^ uVar2;
        *(uint *)((long)param_3 + lVar8 + 0x10c) = uVar2;
        if (lVar8 + 0x20 == 0) break;
        uVar7 = *(uint *)((long)param_3 + lVar8 + 0xf0) ^
                *(uint *)(&_AESSubBytesWordTable + (ulong)(byte)uVar2 * 4) ^
                *(uint *)(&DAT_002b369c + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_002b3a9c + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_002b3e9c + (ulong)(uVar2 >> 0x18) * 4);
        *(uint *)((long)param_3 + lVar8 + 0x110) = uVar7;
        uVar7 = *(uint *)((long)param_3 + lVar8 + 0xf4) ^ uVar7;
        *(uint *)((long)param_3 + lVar8 + 0x114) = uVar7;
        uVar7 = *(uint *)((long)param_3 + lVar8 + 0xf8) ^ uVar7;
        *(uint *)((long)param_3 + lVar8 + 0x118) = uVar7;
        uVar7 = *(uint *)((long)param_3 + lVar8 + 0xfc) ^ uVar7;
        *(uint *)((long)param_3 + lVar8 + 0x11c) = uVar7;
        lVar8 = lVar8 + 0x20;
      }
      return 0;
    }
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

