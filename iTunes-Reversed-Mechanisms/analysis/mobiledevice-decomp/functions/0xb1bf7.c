// rea decompile_all
// name: _createHash
// address: 0xb1bf7
// body: available
// range: 0xb1bf7-0xb1e95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb1e91 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _createHash(undefined8 param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [112];
  CC_LONG local_68 [2];
  code *local_60;
  undefined *local_58;
  undefined8 *local_50;
  byte local_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_2 == 2) {
    local_f0 = 0;
    local_e0 = 0x7800000000;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    local_d8._8_4_ = 0;
    local_d8._12_4_ = 0;
    local_d8._16_4_ = 0;
    local_d8._20_4_ = 0;
    local_d8._24_4_ = 0;
    local_d8._28_4_ = 0;
    local_d8._32_4_ = 0;
    local_d8._36_4_ = 0;
    local_d8._40_4_ = 0;
    local_d8._44_4_ = 0;
    local_d8._48_4_ = 0;
    local_d8._52_4_ = 0;
    local_d8._56_4_ = 0;
    local_d8._60_4_ = 0;
    local_d8._64_4_ = 0;
    local_d8._68_4_ = 0;
    local_d8._72_4_ = 0;
    local_d8._76_4_ = 0;
    local_d8._80_4_ = 0;
    local_d8._84_4_ = 0;
    local_d8._88_4_ = 0;
    local_e8 = &local_f0;
    _CC_MD5_Init((CC_MD5_CTX *)local_d8);
    local_d8._104_8_ = PTR___NSConcreteStackBlock_004412a8;
    local_68[0] = 0x42000000;
    local_68[1] = 0;
    local_60 = ___createMD5Digest_block_invoke;
    local_58 = &___block_descriptor_tmp_229;
    local_50 = &local_f0;
    cVar2 = _MI_read_file(param_1);
    _CC_MD5_Final(local_48,(CC_MD5_CTX *)(local_e8 + 3));
    if (cVar2 == '\0') {
      _createHash_cold_1(param_1);
LAB_000b1e8a:
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = _calloc(1,0x21);
      lVar4 = 0;
      do {
        bVar1 = local_48[lVar4];
        *(char *)((long)pvVar3 + lVar4 * 2) = "0123456789abcdef"[bVar1 >> 4];
        *(char *)((long)pvVar3 + lVar4 * 2 + 1) = "0123456789abcdef"[bVar1 & 0xf];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x10);
      *(undefined1 *)((long)pvVar3 + 0x20) = 0;
    }
  }
  else {
    if (param_2 != 1) {
      uVar5 = 0;
      _dmlog("createHash",0x2f3,&cf_unknowntype__d,param_2);
      goto LAB_000b1e57;
    }
    local_f0 = 0;
    local_e0 = 0x8000000000;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    local_d8._8_4_ = 0;
    local_d8._12_4_ = 0;
    local_d8._16_4_ = 0;
    local_d8._20_4_ = 0;
    local_d8._24_4_ = 0;
    local_d8._28_4_ = 0;
    local_d8._32_4_ = 0;
    local_d8._36_4_ = 0;
    local_d8._40_4_ = 0;
    local_d8._44_4_ = 0;
    local_d8._48_4_ = 0;
    local_d8._52_4_ = 0;
    local_d8._56_4_ = 0;
    local_d8._60_4_ = 0;
    local_d8._64_4_ = 0;
    local_d8._68_4_ = 0;
    local_d8._72_4_ = 0;
    local_d8._76_4_ = 0;
    local_d8._80_4_ = 0;
    local_d8._84_4_ = 0;
    local_d8._88_4_ = 0;
    local_d8._92_4_ = 0;
    local_d8._96_4_ = 0;
    local_d8._100_4_ = 0;
    local_e8 = &local_f0;
    _CC_SHA256_Init((CC_SHA256_CTX *)local_d8);
    local_d8._104_8_ = PTR___NSConcreteStackBlock_004412a8;
    local_68[0] = 0x42000000;
    local_68[1] = 0;
    local_60 = ___createSHA256Digest_block_invoke;
    local_58 = &___block_descriptor_tmp_216;
    local_50 = &local_f0;
    cVar2 = _MI_read_file(param_1);
    _CC_SHA256_Final(local_48,(CC_SHA256_CTX *)(local_e8 + 3));
    if (cVar2 == '\0') {
      _createHash_cold_2(param_1);
      goto LAB_000b1e8a;
    }
    pvVar3 = _calloc(1,0x41);
    lVar4 = 0;
    do {
      bVar1 = local_48[lVar4];
      *(char *)((long)pvVar3 + lVar4 * 2) = "0123456789abcdef"[bVar1 >> 4];
      *(char *)((long)pvVar3 + lVar4 * 2 + 1) = "0123456789abcdef"[bVar1 & 0xf];
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x20);
    *(undefined1 *)((long)pvVar3 + 0x40) = 0;
  }
  __Block_object_dispose(&local_f0,8);
  if (pvVar3 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = _CFStringCreateWithCString(0,pvVar3,0x8000100);
    _free(pvVar3);
  }
LAB_000b1e57:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

