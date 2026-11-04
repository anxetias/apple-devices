// rea decompile_all
// name: _compression_encode_buffer
// address: 0x20bc40
// body: available
// range: 0x20bc40-0x20bfd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_compression_encode_buffer
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,void *param_5
          ,uint param_6)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  
  uVar1 = 0xa18;
  if (0xff < (param_6 ^ 0xa00)) {
    uVar1 = param_6;
  }
  bVar7 = uVar1 - 0xb00 < 10;
  uVar5 = 2;
  if (bVar7) {
    uVar5 = uVar1 & 0xf;
  }
  uVar3 = 0xb02;
  if (!bVar7) {
    uVar3 = uVar1;
  }
  bVar7 = uVar3 - 0x200 < 10;
  uVar1 = 5;
  if (bVar7) {
    uVar1 = uVar3 & 0xf;
  }
  uVar4 = 0x205;
  if (!bVar7) {
    uVar4 = uVar3;
  }
  bVar7 = 9 < uVar4 - 0x500;
  uVar3 = uVar4 & 0xf;
  if (bVar7) {
    uVar3 = uVar1;
  }
  uVar1 = 0x505;
  if (bVar7) {
    uVar1 = uVar4;
  }
  sVar2 = _compression_encode_scratch_buffer_size(uVar1);
  bVar7 = sVar2 != 0;
  bVar8 = param_5 == (void *)0x0;
  if ((bVar8 && bVar7) && (param_5 = _malloc(sVar2), param_5 == (void *)0x0)) {
    return 0;
  }
  uVar6 = 0;
  if (0x800 < (int)uVar1) {
    if (0xa17 < (int)uVar1) {
      if ((uVar1 - 0xc00 < 0x21) && ((0x100010001U >> ((ulong)(uVar1 - 0xc00) & 0x3f) & 1) != 0)) {
        uVar6 = _smb_encode_buffer(param_1,param_2,param_3,param_4,param_5,uVar1);
      }
      else if (uVar1 == 0xa18) {
        uVar6 = _lz24_encode_buffer(param_1,param_2,param_3,param_4,param_5,param_6 & 0xff);
      }
      else if (uVar1 == 0xb02) {
        uVar6 = _brotli_encode_buffer(param_1,param_2,param_3,param_4,param_5,uVar5);
      }
      goto LAB_0020bfa7;
    }
    if ((int)uVar1 < 0x8a1) {
      if ((1 < uVar1 - 0x801) && (uVar1 != 0x891)) goto LAB_0020bfa7;
    }
    else {
      if (uVar1 - 0x900 < 2) {
        uVar6 = _lzvn_encode_buffer(param_1,param_2,param_3,param_4,param_5,uVar1);
        goto LAB_0020bfa7;
      }
      if (uVar1 != 0x8a1) goto LAB_0020bfa7;
    }
    uVar6 = _lzfse_encode_buffer(param_1,param_2,param_3,param_4,param_5,uVar1);
    goto LAB_0020bfa7;
  }
  if ((int)uVar1 < 0x505) {
    if ((int)uVar1 < 0x205) {
      if (uVar1 == 0x100) {
        uVar6 = _lz4_encode_buffer(param_1,param_2,param_3,param_4,param_5);
      }
      else {
        uVar6 = 0;
        if (uVar1 == 0x101) {
          uVar6 = _lz4raw_encode_buffer(param_1,param_2,param_3,param_4,param_5);
        }
      }
      goto LAB_0020bfa7;
    }
    if (uVar1 != 0x205) {
      if (uVar1 == 0x306) {
        uVar6 = _lzma_encode_buffer(param_1,param_2,param_3,param_4,param_5);
      }
      goto LAB_0020bfa7;
    }
    uVar9 = 0;
  }
  else {
    if (uVar1 - 0x600 < 3) {
      uVar6 = _lzbitmap_fast_encode_buffer(param_1,param_2,param_3,param_4,param_5,uVar1 & 0xf);
      goto LAB_0020bfa7;
    }
    if (uVar1 - 0x700 < 3) {
      uVar6 = _lzbitmap_encode_buffer(param_1,param_2,param_3,param_4,param_5,uVar1 & 0xf);
      goto LAB_0020bfa7;
    }
    uVar6 = 0;
    if (uVar1 != 0x505) goto LAB_0020bfa7;
    uVar9 = 1;
  }
  uVar6 = _zlib_encode_buffer(param_1,param_2,param_3,param_4,param_5,uVar3,uVar9,sVar2);
LAB_0020bfa7:
  if (bVar8 && bVar7) {
    _memset_s(param_5,sVar2,0);
    _free(param_5);
  }
  return uVar6;
}

