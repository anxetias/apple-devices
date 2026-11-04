// rea decompile_all
// name: _zlib_decode_buffer
// address: 0x5b51f
// body: available
// range: 0x5b51f-0x5b6b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _zlib_decode_buffer(Bytef *param_1,long param_2,byte *param_3,ulong param_4,undefined8 *param_5
                        ,int param_6)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  uLong uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_6 == 0) {
LAB_0005b5aa:
    param_5[8] = 0;
    param_5[9] = 0;
    param_5[6] = 0;
    param_5[7] = 0;
    param_5[0x10] = 0;
    param_5[0x11] = 0;
    param_5[0xe] = 0;
    param_5[0xf] = 0;
    param_5[0xc] = 0;
    param_5[0xd] = 0;
    param_5[10] = 0;
    param_5[0xb] = 0;
    param_5[3] = param_3;
    param_5[4] = param_4 * 8;
    param_5[5] = 0;
    *param_5 = param_1;
    param_5[1] = param_2;
    param_5[2] = param_4;
    param_5[8] = param_1;
    param_5[7] = param_1 + param_2;
    if (param_4 < 9) {
LAB_0005b635:
      lVar2 = _zlibDecodeBufferSafe();
      if (lVar2 == 0) goto LAB_0005b6a3;
    }
    else {
      param_5[2] = param_4 - 8;
      param_5[4] = param_4 * 8 + -0x40;
      lVar2 = _zlibDecodeBuffer();
      param_5[2] = param_5[2] + 8;
      param_5[4] = param_5[4] + 0x40;
      if (lVar2 == 0 || *(int *)(param_5 + 6) != 0xb) goto LAB_0005b635;
    }
    uVar3 = param_5[5] + 7 & 0xfffffffffffffff8;
    param_5[5] = uVar3;
    if (param_6 != 0) {
      uVar5 = 0;
      if (uVar3 <= (ulong)param_5[4]) {
        uVar5 = param_5[4] - uVar3;
      }
      if (0x1f < uVar5) {
        uVar4 = _adler32(0,(Bytef *)0x0,0);
        uVar4 = _adler32(uVar4,param_1,(uInt)lVar2);
        uVar6 = *(uint *)(param_5[3] + ((ulong)param_5[5] >> 3));
        if ((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) !=
            (uint)uVar4) {
          return 0;
        }
      }
    }
  }
  else {
    if (1 < param_4) {
      if ((*param_3 & 0xf) != 8) {
        return 0;
      }
      if ((param_3[1] & 0x20) != 0) {
        return 0;
      }
      uVar1 = CONCAT11(*param_3,param_3[1]);
      uVar6 = (uint)uVar1 * 0x843 >> 0x10;
      if ((ushort)((short)(((uVar1 - uVar6 & 0xffff) >> 1) + uVar6 >> 4) * -0x1f + uVar1) != 0) {
        return 0;
      }
      param_3 = param_3 + 2;
      param_4 = param_4 - 2;
      goto LAB_0005b5aa;
    }
LAB_0005b6a3:
    lVar2 = 0;
  }
  return lVar2;
}

