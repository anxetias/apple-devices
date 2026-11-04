// rea decompile_all
// name: _compression_decode_buffer
// address: 0x20bfd8
// body: available
// range: 0x20bfd8-0x20c378 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _compression_decode_buffer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               void *param_5,uint param_6)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  
  uVar1 = 0xa18;
  if (0xff < (param_6 ^ 0xa00)) {
    uVar1 = param_6;
  }
  uVar3 = 0xb02;
  if (9 < uVar1 - 0xb00) {
    uVar3 = uVar1;
  }
  uVar1 = 0x205;
  if (9 < uVar3 - 0x200) {
    uVar1 = uVar3;
  }
  uVar3 = 0x505;
  if (9 < uVar1 - 0x500) {
    uVar3 = uVar1;
  }
  sVar2 = _compression_decode_scratch_buffer_size(uVar3);
  bVar6 = param_5 == (void *)0x0;
  if ((bVar6 && sVar2 != 0) && (param_5 = _malloc(sVar2), param_5 == (void *)0x0)) {
    return 0;
  }
  lVar5 = 0;
  if (0x800 < (int)uVar3) {
    if ((int)uVar3 < 0xa18) {
      if ((int)uVar3 < 0x8a1) {
        if ((uVar3 - 0x801 < 2) || (uVar3 == 0x891)) {
          lVar5 = _lzfse_decode_buffer(param_1,param_2,param_3,param_4,param_5,uVar3);
        }
      }
      else if (uVar3 - 0x900 < 2) {
        lVar5 = _lzvn_decode_buffer(param_1,param_2,param_3,param_4);
      }
      else if (uVar3 == 0x8a1) {
        lVar5 = _lzfse_decode_buffer_iboot(param_1,param_2,param_3,param_4,param_5);
      }
    }
    else if ((uVar3 - 0xc00 < 0x21) && ((0x100010001U >> ((ulong)(uVar3 - 0xc00) & 0x3f) & 1) != 0))
    {
      lVar5 = _smb_decode_buffer(param_1,param_2,param_3,param_4,param_5,uVar3);
    }
    else if (uVar3 == 0xa18) {
      lVar5 = _lz24_decode_buffer(param_1,param_2,param_3,param_4);
    }
    else if (uVar3 == 0xb02) {
      lVar5 = _brotli_decode_buffer(param_1,param_2,param_3,param_4,param_5);
    }
    goto LAB_0020c34a;
  }
  if ((int)uVar3 < 0x505) {
    if ((int)uVar3 < 0x205) {
      if (uVar3 == 0x100) {
        lVar5 = _lz4_decode_buffer(param_1,param_2,param_3,param_4,param_5);
      }
      else if (uVar3 == 0x101) {
        lVar5 = _lz4raw_decode_buffer(param_1,param_2,param_3,param_4,param_5);
      }
      goto LAB_0020c34a;
    }
    if (uVar3 != 0x205) {
      if (uVar3 == 0x306) {
        lVar5 = _lzma_xz_buffer_decode(param_1,param_2,param_3,param_4,param_5);
        if (lVar5 == 0) {
          lVar5 = _lzma_decode_buffer(param_1,param_2,param_3,param_4,0);
        }
      }
      else {
        lVar5 = 0;
        if (uVar3 == 0x407) {
          lVar5 = _lzx_decode_buffer(param_1,param_2,param_3,param_4,param_5);
        }
      }
      goto LAB_0020c34a;
    }
    uVar4 = 0;
  }
  else {
    if (uVar3 - 0x600 < 3) {
      lVar5 = _lzbitmap_fast_decode_buffer(param_1,param_2,param_3,param_4);
      goto LAB_0020c34a;
    }
    if (uVar3 - 0x700 < 3) {
      lVar5 = _lzbitmap_decode_buffer(param_1,param_2,param_3,param_4,param_5);
      goto LAB_0020c34a;
    }
    if (uVar3 != 0x505) goto LAB_0020c34a;
    uVar4 = 1;
  }
  lVar5 = _zlib_decode_buffer(param_1,param_2,param_3,param_4,param_5,uVar4);
LAB_0020c34a:
  if (bVar6 && sVar2 != 0) {
    _memset_s(param_5,sVar2,0,sVar2);
    _free(param_5);
  }
  return lVar5;
}

