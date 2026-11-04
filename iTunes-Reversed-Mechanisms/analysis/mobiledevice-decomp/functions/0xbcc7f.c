// rea decompile_all
// name: _initializeOpenSSL
// address: 0xbcc7f
// body: available
// range: 0xbcc7f-0xbcd2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbcd27 to 0x2a9b76 _EVP_add_digest (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _initializeOpenSSL(int param_1,int param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  long extraout_RAX;
  EVP_MD *pEVar2;
  char *file;
  long lVar3;
  
  uVar1 = _CRYPTO_num_locks();
  _CRYPTO_get_locking_callback(param_1,param_2,file,param_4);
  if (extraout_RAX == 0) {
    _openSSLLocks = _calloc((long)(int)uVar1,0x40);
    if (_openSSLLocks != (void *)0x0) {
      if (0 < (int)uVar1) {
        lVar3 = 0;
        do {
          _pthread_mutex_init((pthread_mutex_t *)((long)_openSSLLocks + lVar3),
                              (pthread_mutexattr_t *)0x0);
          lVar3 = lVar3 + 0x40;
        } while ((ulong)uVar1 << 6 != lVar3);
      }
      _CRYPTO_set_locking_callback(_openSSLLockCallBack);
      _CRYPTO_set_id_callback(_openSSLThreadIDCallBack);
      pEVar2 = _EVP_sha1();
      _EVP_add_digest(pEVar2);
      pEVar2 = _EVP_sha256();
      _EVP_add_digest(pEVar2);
      pEVar2 = _EVP_sha384();
      _EVP_add_digest(pEVar2);
      pEVar2 = _EVP_sha512();
      _EVP_add_digest(pEVar2);
      return;
    }
  }
  return;
}

