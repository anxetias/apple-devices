// rea decompile_all
// name: _crc32
// address: 0x81aa1
// body: available
// range: 0x81aa1-0x81d76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uLong _crc32(uLong crc,Bytef *buf,uInt len)

{
  Bytef *pBVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if (buf == (Bytef *)0x0) {
    return 0;
  }
  uVar3 = ~(uint)crc;
  pBVar1 = buf;
  uVar2 = len;
  if (((ulong)buf & 3) != 0 && len != 0) {
    do {
      pBVar1 = pBVar1 + 1;
      uVar2 = *(uint *)buf;
      buf = (Bytef *)((long)buf + 1);
      uVar3 = uVar3 >> 8 ^ *(uint *)(&_crc_table + (ulong)(byte)((byte)uVar2 ^ (byte)uVar3) * 8);
      uVar2 = len - 1;
      if (len == 1) break;
      len = uVar2;
    } while (((ulong)pBVar1 & 3) != 0);
  }
  for (; 0x1f < uVar2; uVar2 = uVar2 - 0x20) {
    uVar3 = uVar3 ^ *(uint *)buf;
    uVar3 = *(uint *)(&DAT_0031c5e0 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(&DAT_0031cde0 + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(&DAT_0031bde0 + (uVar3 >> 0xd & 0x7f8)) ^
            *(uint *)(&_crc_table + (ulong)(uVar3 >> 0x18) * 8) ^ *(uint *)((long)buf + 4);
    uVar3 = *(uint *)(&DAT_0031c5e0 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(&DAT_0031cde0 + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(&DAT_0031bde0 + (uVar3 >> 0xd & 0x7f8)) ^
            *(uint *)(&_crc_table + (ulong)(uVar3 >> 0x18) * 8) ^ *(uint *)((long)buf + 8);
    uVar3 = *(uint *)(&DAT_0031c5e0 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(&DAT_0031cde0 + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(&DAT_0031bde0 + (uVar3 >> 0xd & 0x7f8)) ^
            *(uint *)(&_crc_table + (ulong)(uVar3 >> 0x18) * 8) ^ *(uint *)((long)buf + 0xc);
    uVar3 = *(uint *)(&DAT_0031c5e0 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(&DAT_0031cde0 + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(&DAT_0031bde0 + (uVar3 >> 0xd & 0x7f8)) ^
            *(uint *)(&_crc_table + (ulong)(uVar3 >> 0x18) * 8) ^ *(uint *)((long)buf + 0x10);
    uVar3 = *(uint *)(&DAT_0031c5e0 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(&DAT_0031cde0 + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(&DAT_0031bde0 + (uVar3 >> 0xd & 0x7f8)) ^
            *(uint *)(&_crc_table + (ulong)(uVar3 >> 0x18) * 8) ^ *(uint *)((long)buf + 0x14);
    uVar3 = *(uint *)(&DAT_0031c5e0 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(&DAT_0031cde0 + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(&DAT_0031bde0 + (uVar3 >> 0xd & 0x7f8)) ^
            *(uint *)(&_crc_table + (ulong)(uVar3 >> 0x18) * 8) ^ *(uint *)((long)buf + 0x18);
    uVar3 = *(uint *)(&DAT_0031c5e0 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(&DAT_0031cde0 + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(&DAT_0031bde0 + (uVar3 >> 0xd & 0x7f8)) ^
            *(uint *)(&_crc_table + (ulong)(uVar3 >> 0x18) * 8) ^ *(uint *)((long)buf + 0x1c);
    buf = (Bytef *)((long)buf + 0x20);
    uVar3 = *(uint *)(&DAT_0031c5e0 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(&DAT_0031cde0 + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(&DAT_0031bde0 + (uVar3 >> 0xd & 0x7f8)) ^
            *(uint *)(&_crc_table + (ulong)(uVar3 >> 0x18) * 8);
  }
  for (; 3 < uVar2; uVar2 = uVar2 - 4) {
    uVar3 = uVar3 ^ *(uint *)buf;
    uVar3 = *(uint *)(&DAT_0031c5e0 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(&DAT_0031cde0 + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(&DAT_0031bde0 + (uVar3 >> 0xd & 0x7f8)) ^
            *(uint *)(&_crc_table + (ulong)(uVar3 >> 0x18) * 8);
    buf = (Bytef *)((long)buf + 4);
  }
  if (uVar2 != 0) {
    lVar4 = 0;
    do {
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&_crc_table + (ulong)(byte)(*(byte *)((long)buf + lVar4) ^ (byte)uVar3) * 8)
      ;
      lVar4 = lVar4 + 1;
    } while (uVar2 != (uint)lVar4);
  }
  return (ulong)~uVar3;
}

