// rea decompile_all
// name: _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
// address: 0x28ec7c
// body: available
// range: 0x28ec7c-0x28f09c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x28f098 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
              (long param_1,undefined8 param_2,void *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  RSA *a;
  undefined8 uVar3;
  long lVar4;
  ulong e;
  char *pcVar5;
  BIO *local_e0;
  long local_d8;
  long local_d0;
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
        local_d0 = _CFStringCreateWithFormat(uVar3,0,&cf____private,param_2);
        if (local_d0 != 0) goto LAB_0028ed51;
      }
      local_d0 = 0;
      local_d8 = 0;
      a = (RSA *)0x0;
      lVar4 = 0;
      local_e0 = (BIO *)0x0;
      goto LAB_0028ef8e;
    }
    local_c8 = _CFRetain(param_2);
    local_e0 = _BIO_new_mem_buf(param_3,param_4);
    if (local_e0 == (BIO *)0x0) {
      local_e0 = (BIO *)0x0;
      a = (RSA *)0x0;
      local_d0 = 0;
      local_d8 = 0;
      lVar4 = 0;
      goto LAB_0028ef8e;
    }
    local_d0 = 0;
    a = (RSA *)_PEM_read_bio_RSA_PUBKEY(local_e0,0,0,0);
    if (a != (RSA *)0x0) {
      local_d8 = 0;
LAB_0028ee93:
      iVar2 = _i2d_RSAPublicKey(a,(uchar **)0x0);
      uVar3 = _CFGetAllocator(param_1);
      lVar4 = _CFDataCreateMutable(uVar3,iVar2);
      if (lVar4 == 0) {
        local_bc = 2;
      }
      else {
        _CFDataSetLength(lVar4,iVar2);
        local_b8[0] = (uchar *)_CFDataGetMutableBytePtr(lVar4);
        _i2d_RSAPublicKey(a,local_b8);
        _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x178),local_c8,lVar4);
        if ((*(long *)(param_1 + 0x30) == 0) ||
           (local_bc = __AMAuthInstallCryptoRegisterKeyHash(param_1,local_c8), local_bc == 0)) {
          local_bc = 0;
        }
        else {
          _AMAuthInstallLog(3,"AMAuthInstallCryptoRegisterKeysFromPEMBuffer",
                            "AMAuthInstallCryptoRegisterKeyHash(%@) failed",local_c8);
        }
      }
      goto LAB_0028ef8e;
    }
    pcVar5 = "Public";
LAB_0028ef39:
    e = _ERR_get_error();
    _ERR_error_string(e,(char *)local_b8);
    a = (RSA *)0x0;
    _AMAuthInstallLog(3,"AMAuthInstallCryptoRegisterKeysFromPEMBuffer",
                      "PEM_read_bio_RSA%sKey() failed: %s",pcVar5,local_b8);
    local_bc = 6;
LAB_0028ef7a:
    local_d8 = 0;
  }
  else {
    local_d0 = _CFRetain(param_2);
    local_c8 = 0;
LAB_0028ed51:
    local_e0 = _BIO_new_mem_buf(param_3,param_4);
    if (local_e0 != (BIO *)0x0) {
      a = (RSA *)_PEM_read_bio_RSAPrivateKey(local_e0,0,0,0);
      if (a == (RSA *)0x0) {
        pcVar5 = "Private";
        goto LAB_0028ef39;
      }
      iVar2 = _i2d_RSAPrivateKey(a,(uchar **)0x0);
      uVar3 = _CFGetAllocator(param_1);
      local_d8 = _CFDataCreateMutable(uVar3,iVar2);
      if (local_d8 != 0) {
        _CFDataSetLength(local_d8,iVar2);
        local_b8[0] = (uchar *)_CFDataGetMutableBytePtr(local_d8);
        _i2d_RSAPrivateKey(a,local_b8);
        _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x178),local_d0,local_d8);
        if (uVar1 < 8) goto LAB_0028ee93;
        local_bc = 0;
        goto LAB_0028ef87;
      }
      goto LAB_0028ef7a;
    }
    local_e0 = (BIO *)0x0;
    a = (RSA *)0x0;
    local_d8 = 0;
  }
LAB_0028ef87:
  lVar4 = 0;
LAB_0028ef8e:
  _SafeRelease(local_c8);
  _SafeRelease(local_d0);
  _SafeRelease(local_d8);
  _SafeRelease(lVar4);
  if (a != (RSA *)0x0) {
    _RSA_free(a);
  }
  if (local_e0 != (BIO *)0x0) {
    _BIO_free(local_e0);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_bc;
}

