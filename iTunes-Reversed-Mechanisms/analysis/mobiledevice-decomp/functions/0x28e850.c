// rea decompile_all
// name: _AMAuthInstallCryptoRegisterKeysFromECCBuffer
// address: 0x28e850
// body: available
// range: 0x28e850-0x28ec7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x28ec77 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoRegisterKeysFromECCBuffer
              (long param_1,undefined8 param_2,void *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  EC_KEY *a;
  undefined8 uVar3;
  long lVar4;
  ulong e;
  char *pcVar5;
  long local_e0;
  long local_d8;
  BIO *local_d0;
  long local_c8;
  int local_bc;
  uchar *local_b8 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar1 = __AMAuthInstallCryptoGetKeyIdType(param_2);
  local_bc = 2;
  if (uVar1 < 8) {
    if (uVar1 < 4) {
      uVar3 = _CFGetAllocator(param_1);
      local_c8 = _CFStringCreateWithFormat(uVar3,0,&cf____public,param_2);
      if (local_c8 == 0) {
        local_c8 = 0;
      }
      else {
        uVar3 = _CFGetAllocator(param_1);
        local_d8 = _CFStringCreateWithFormat(uVar3,0,&cf____private,param_2);
        if (local_d8 != 0) goto LAB_0028e925;
      }
      local_d8 = 0;
      local_e0 = 0;
      a = (EC_KEY *)0x0;
      lVar4 = 0;
      local_d0 = (BIO *)0x0;
      goto LAB_0028eb6d;
    }
    local_c8 = _CFRetain(param_2);
    local_d0 = _BIO_new_mem_buf(param_3,param_4);
    if (local_d0 == (BIO *)0x0) {
      local_d0 = (BIO *)0x0;
      a = (EC_KEY *)0x0;
      local_d8 = 0;
      local_e0 = 0;
      lVar4 = 0;
      goto LAB_0028eb6d;
    }
    local_d8 = 0;
    a = (EC_KEY *)_PEM_read_bio_EC_PUBKEY(local_d0,0,0,0);
    if (a != (EC_KEY *)0x0) {
      local_e0 = 0;
      goto LAB_0028ea79;
    }
    pcVar5 = "Public";
LAB_0028eb18:
    e = _ERR_get_error();
    _ERR_error_string(e,(char *)local_b8);
    a = (EC_KEY *)0x0;
    _AMAuthInstallLog(3,"AMAuthInstallCryptoRegisterKeysFromECCBuffer",
                      "PEM_read_bio_EC%sKey() failed: %s",pcVar5,local_b8);
    local_bc = 6;
  }
  else {
    local_d8 = _CFRetain(param_2);
    local_c8 = 0;
LAB_0028e925:
    local_d0 = _BIO_new_mem_buf(param_3,param_4);
    if (local_d0 == (BIO *)0x0) {
      local_d0 = (BIO *)0x0;
      a = (EC_KEY *)0x0;
    }
    else {
      a = (EC_KEY *)_PEM_read_bio_ECPrivateKey(local_d0,0,0,0);
      if (a == (EC_KEY *)0x0) {
        pcVar5 = "Private";
        goto LAB_0028eb18;
      }
      lVar4 = 0;
      iVar2 = _i2d_ECPrivateKey(a,(uchar **)0x0);
      uVar3 = _CFGetAllocator(param_1);
      local_e0 = _CFDataCreateMutable(uVar3,iVar2);
      if (local_e0 != 0) {
        _CFDataSetLength(local_e0,iVar2);
        local_b8[0] = (uchar *)_CFDataGetMutableBytePtr(local_e0);
        _i2d_ECPrivateKey(a,local_b8);
        _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x178),local_d8,local_e0);
        if (7 < uVar1) {
          local_bc = 0;
          goto LAB_0028eb6d;
        }
LAB_0028ea79:
        iVar2 = _i2d_EC_PUBKEY(a,(uchar **)0x0);
        uVar3 = _CFGetAllocator(param_1);
        lVar4 = _CFDataCreateMutable(uVar3,iVar2);
        if (lVar4 == 0) {
          local_bc = 2;
        }
        else {
          _CFDataSetLength(lVar4,iVar2);
          local_b8[0] = (uchar *)_CFDataGetMutableBytePtr(lVar4);
          _i2d_EC_PUBKEY(a,local_b8);
          _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x178),local_c8,lVar4);
          local_bc = __AMAuthInstallCryptoRegisterKeyHash(param_1,local_c8);
          if (local_bc == 0) {
            local_bc = 0;
          }
          else {
            _AMAuthInstallLog(3,"AMAuthInstallCryptoRegisterKeysFromECCBuffer",
                              "AMAuthInstallCryptoRegisterKeyHash(%@) failed",local_c8);
          }
        }
        goto LAB_0028eb6d;
      }
    }
  }
  local_e0 = 0;
  lVar4 = 0;
LAB_0028eb6d:
  _SafeRelease(local_c8);
  _SafeRelease(local_d8);
  _SafeRelease(local_e0);
  _SafeRelease(lVar4);
  if (a != (EC_KEY *)0x0) {
    _EC_KEY_free(a);
  }
  if (local_d0 != (BIO *)0x0) {
    _BIO_free(local_d0);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_bc;
}

