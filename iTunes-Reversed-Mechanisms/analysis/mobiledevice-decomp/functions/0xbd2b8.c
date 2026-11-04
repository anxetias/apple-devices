// rea decompile_all
// name: _readCertificate
// address: 0xbd2b8
// body: available
// range: 0xbd2b8-0xbd40a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbd406 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


X509 * _readCertificate(long param_1,uint *param_2)

{
  int len;
  long lVar1;
  long lVar2;
  FILE *fp;
  X509 *pXVar3;
  void *buf;
  BIO *bp;
  uint *puVar4;
  uint uVar5;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 != 0) {
    lVar1 = _CFGetTypeID();
    lVar2 = _CFStringGetTypeID();
    if (lVar1 == lVar2) {
      _CFStringGetFileSystemRepresentation(param_1,local_438,0x400);
      fp = _fopen(local_438,"r");
      if (fp == (FILE *)0x0) {
        puVar4 = (uint *)___error();
        uVar5 = *puVar4 | 0xc000;
        pXVar3 = (X509 *)0x0;
      }
      else {
        pXVar3 = _d2i_X509_fp(fp,(X509 **)0x0);
        uVar5 = 0xe8008007;
        if (pXVar3 != (X509 *)0x0) {
          uVar5 = 0;
        }
        _fclose(fp);
      }
      goto LAB_000bd3be;
    }
    lVar1 = _CFGetTypeID(param_1);
    lVar2 = _CFDataGetTypeID();
    if (lVar1 == lVar2) {
      buf = (void *)_CFDataGetBytePtr(param_1);
      len = _CFDataGetLength(param_1);
      bp = _BIO_new_mem_buf(buf,len);
      pXVar3 = (X509 *)0x0;
      if (bp == (BIO *)0x0) {
        uVar5 = 0xe800800a;
      }
      else {
        pXVar3 = _d2i_X509_bio(bp,(X509 **)0x0);
        uVar5 = 0xe8008007;
        if (pXVar3 != (X509 *)0x0) {
          uVar5 = 0;
        }
        _BIO_free(bp);
      }
      goto LAB_000bd3be;
    }
  }
  pXVar3 = (X509 *)0x0;
  uVar5 = 0;
LAB_000bd3be:
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar5;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return pXVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

