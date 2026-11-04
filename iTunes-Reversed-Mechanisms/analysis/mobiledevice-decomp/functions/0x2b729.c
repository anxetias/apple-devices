// rea decompile_all
// name: _vng_aes_encrypt_key128
// address: 0x2b729
// body: available
// range: 0x2b729-0x2b757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _vng_aes_encrypt_key128(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar6 = param_1[2];
  uVar5 = param_1[3];
  param_2[0x3c] = 0xa0;
  *(byte *)(param_2 + 4) = 1;
  *(byte *)(param_2 + 8) = 2;
  *(byte *)(param_2 + 0xc) = 4;
  *(byte *)(param_2 + 0x10) = 8;
  *(byte *)(param_2 + 0x14) = 0x10;
  *(byte *)(param_2 + 0x18) = 0x20;
  *(byte *)(param_2 + 0x1c) = 0x40;
  *(byte *)(param_2 + 0x20) = 0x80;
  *(byte *)(param_2 + 0x24) = 0x1b;
  *(byte *)(param_2 + 0x28) = 0x36;
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar6;
  param_2[3] = uVar5;
  do {
    puVar4 = param_2 + 4;
    uVar1 = *puVar4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_002b3e9c + ((ulong)uVar5 & 0xff) * 4) ^
            *(uint *)(&_AESSubBytesWordTable + (ulong)(byte)(uVar5 >> 8) * 4) ^
            *(uint *)(&DAT_002b369c + (ulong)(byte)(uVar5 >> 0x10) * 4) ^
            *(uint *)(&DAT_002b3a9c + (ulong)(byte)(uVar5 >> 0x18) * 4) ^ (uint)(byte)uVar1;
    *puVar4 = uVar2;
    uVar3 = uVar3 ^ uVar2;
    param_2[5] = uVar3;
    uVar6 = uVar6 ^ uVar3;
    param_2[6] = uVar6;
    uVar5 = uVar5 ^ uVar6;
    param_2[7] = uVar5;
    param_2 = puVar4;
  } while ((byte)uVar1 != 0x36);
  return 0;
}

