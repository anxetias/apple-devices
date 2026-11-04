// rea decompile_all
// name: _ZipStreamConcoctFixedStreamData
// address: 0x9fd33
// body: available
// range: 0x9fd33-0x9fe54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ZipStreamConcoctFixedStreamData
                (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  long lVar2;
  time_t tVar3;
  time_t tVar4;
  void *pvVar5;
  Bytef *buf;
  uLong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  uInt len;
  
  uVar7 = _kZipFixedMetadataFilePath;
  tVar3 = _time((time_t *)0x0);
  tVar4 = _time((time_t *)0x0);
  pvVar5 = (void *)_CreateCDRecord(uVar7,0x81a4,tVar3,tVar4);
  bVar1 = *(byte *)(param_1 + 0x2c);
  lVar2 = *(long *)(&_gHashDigestSizes + (ulong)bVar1 * 8);
  pvVar8 = (void *)(lVar2 + 7);
  buf = _malloc((size_t)pvVar8);
  if (buf != (Bytef *)0x0) {
    buf[0] = 'M';
    buf[1] = 'd';
    buf[2] = 'F';
    buf[3] = 'x';
    buf[4] = bVar1 + 1;
    *(short *)(buf + 5) = (short)lVar2;
    ___bzero();
    *(undefined2 *)((long)pvVar5 + 10) = 0;
    len = (uInt)pvVar8;
    *(uInt *)((long)pvVar5 + 0x14) = len;
    *(uInt *)((long)pvVar5 + 0x18) = len;
    uVar6 = _crc32(0,(Bytef *)0x0,0);
    uVar6 = _crc32(uVar6,buf,len);
    *(int *)((long)pvVar5 + 0x10) = (int)uVar6;
    uVar7 = _CreateMutableCDRecord(pvVar5);
    *param_2 = uVar7;
    pvVar8 = (void *)_CreateLocalFileRecord(pvVar5,0x1f5,0x1f5);
    uVar7 = _CreateMutableLocalFileRecord(pvVar8);
    *param_3 = uVar7;
    _free(pvVar8);
    *param_4 = buf;
  }
  _free(pvVar5);
  return CONCAT71((int7)((ulong)pvVar8 >> 8),buf != (Bytef *)0x0) & 0xffffffff;
}

