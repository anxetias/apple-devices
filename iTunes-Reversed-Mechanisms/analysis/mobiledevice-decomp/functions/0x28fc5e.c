// rea decompile_all
// name: _AMAuthInstallCryptoEncryptWithSessionKeyAndIV
// address: 0x28fc5e
// body: available
// range: 0x28fc5e-0x28fdfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x28fdf8 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallCryptoEncryptWithSessionKeyAndIV
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5
          )

{
  int iVar1;
  EVP_CIPHER *cipher;
  uchar *puVar2;
  uchar *iv;
  long lVar3;
  uchar *out;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_100;
  int local_e8;
  int local_e4;
  EVP_CIPHER_CTX local_e0;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_2 == 0) {
    uStack_100 = 1;
LAB_0028fdef:
    out = (uchar *)0x0;
  }
  else {
    _EVP_CIPHER_CTX_init(&local_e0);
    cipher = _EVP_aes_128_cbc();
    puVar2 = (uchar *)_CFDataGetBytePtr(param_2);
    iv = (uchar *)_CFDataGetBytePtr(param_3);
    out = (uchar *)0x0;
    iVar1 = _EVP_EncryptInit_ex(&local_e0,cipher,(ENGINE *)0x0,puVar2,iv);
    uStack_100 = 6;
    if (iVar1 == 1) {
      lVar3 = _CFDataGetLength(param_4);
      out = _malloc(lVar3 + 0x7f);
      if (out == (uchar *)0x0) {
        uStack_100 = 2;
        goto LAB_0028fdef;
      }
      puVar2 = (uchar *)_CFDataGetBytePtr(param_4);
      iVar1 = _CFDataGetLength(param_4);
      iVar1 = _EVP_EncryptUpdate(&local_e0,out,&local_e4,puVar2,iVar1);
      if (iVar1 == 1) {
        iVar1 = _EVP_EncryptFinal_ex(&local_e0,out + local_e4,&local_e8);
        if (iVar1 == 1) {
          uVar4 = _CFGetAllocator(param_1);
          lVar5 = _CFDataCreate(uVar4,out,(long)local_e8 + (long)local_e4);
          lVar3 = 0;
          if (lVar5 != 0) {
            uVar4 = _CFRetain(lVar5);
            *param_5 = uVar4;
            uStack_100 = 0;
            lVar3 = lVar5;
          }
          goto LAB_0028fdb5;
        }
      }
    }
  }
  lVar3 = 0;
LAB_0028fdb5:
  _SafeFree(out);
  _SafeRelease(lVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uStack_100;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

