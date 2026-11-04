// rea decompile_all
// name: _createCMSSignature
// address: 0xbcf2f
// body: available
// range: 0xbcf2f-0xbd112 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _createCMSSignature(size_t param_1,EVP_PKEY *param_2,undefined8 param_3,int *param_4)

{
  size_t sVar1;
  X509 *a;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  STACK *st;
  char *data;
  void *buf;
  BIO *data_00;
  PKCS7 *a_00;
  uchar *puVar5;
  long lVar6;
  uchar *local_60;
  EVP_PKEY *local_58;
  size_t local_50;
  int local_44;
  int *local_40;
  X509 *local_38;
  
  local_44 = 0;
  st = (STACK *)0x0;
  local_58 = param_2;
  local_50 = param_1;
  uVar3 = _CFArrayGetValueAtIndex(param_3,0);
  local_38 = (X509 *)_readCertificate(uVar3,&local_44);
  if (local_38 != (X509 *)0x0) {
    lVar4 = _CFArrayGetCount(param_3);
    if (lVar4 < 2) {
      st = (STACK *)0x0;
    }
    else {
      lVar6 = 1;
      local_40 = param_4;
      st = _sk_new_null();
      do {
        uVar3 = _CFArrayGetValueAtIndex(param_3,lVar6);
        data = (char *)_readCertificate(uVar3,&local_44);
        param_4 = local_40;
        if (data == (char *)0x0) break;
        _sk_push(st,data);
        lVar6 = lVar6 + 1;
        param_4 = local_40;
      } while (lVar4 != lVar6);
    }
  }
  sVar1 = local_50;
  lVar4 = 0;
  iVar2 = local_44;
  if (local_44 == 0) {
    buf = (void *)_CFDataGetBytePtr(local_50);
    iVar2 = _CFDataGetLength(sVar1);
    data_00 = _BIO_new_mem_buf(buf,iVar2);
    if (data_00 == (BIO *)0x0) {
      iVar2 = 0;
    }
    else {
      local_40 = param_4;
      a_00 = _PKCS7_sign(local_38,local_58,st,data_00,0x80);
      _BIO_free(data_00);
      if (a_00 == (PKCS7 *)0x0) {
        iVar2 = -0x17ff7ff8;
        lVar4 = 0;
        param_4 = local_40;
      }
      else {
        iVar2 = _i2d_PKCS7(a_00,(uchar **)0x0);
        local_50 = (size_t)iVar2;
        puVar5 = _malloc(local_50);
        lVar4 = 0;
        if (puVar5 != (uchar *)0x0) {
          local_60 = puVar5;
          _i2d_PKCS7(a_00,&local_60);
          lVar4 = _CFDataCreateWithBytesNoCopy
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,puVar5,local_50,
                             *(undefined8 *)PTR__kCFAllocatorMalloc_004410f0);
          if (lVar4 == 0) {
            _free(puVar5);
          }
        }
        iVar2 = 0;
        if (lVar4 == 0) {
          iVar2 = -0x17ff7ff6;
        }
        _PKCS7_free(a_00);
        param_4 = local_40;
      }
    }
  }
  a = local_38;
  if (st != (STACK *)0x0) {
    _sk_free(st);
  }
  if (a != (X509 *)0x0) {
    _X509_free(a);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2;
  }
  return lVar4;
}

