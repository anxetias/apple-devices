// rea decompile_all
// name: __CreatePairingMaterial
// address: 0x17020c
// body: available
// range: 0x17020c-0x170db1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __CreatePairingMaterial(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  RSA *key;
  int iVar1;
  BIO *pBVar2;
  void *pvVar3;
  RSA *key_00;
  BIO *a;
  RSA *key_01;
  EVP_PKEY *pEVar4;
  EVP_PKEY *pkey;
  X509 *x;
  X509 *x_00;
  X509 *x_01;
  ASN1_INTEGER *pAVar5;
  EVP_MD *pEVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  RSA *local_a8;
  EVP_PKEY *local_a0;
  RSA *local_98;
  RSA *pRStack_90;
  RSA *local_88;
  EVP_PKEY *pEStack_80;
  EVP_PKEY *local_78;
  EVP_PKEY *pEStack_70;
  X509 *local_68;
  X509 *pXStack_60;
  X509 *local_58;
  long local_50;
  BIO *local_48;
  BIO *local_40;
  long local_38;
  
  local_68 = (X509 *)0x0;
  pXStack_60 = (X509 *)0x0;
  local_78 = (EVP_PKEY *)0x0;
  pEStack_70 = (EVP_PKEY *)0x0;
  local_88 = (RSA *)0x0;
  pEStack_80 = (EVP_PKEY *)0x0;
  local_98 = (RSA *)0x0;
  pRStack_90 = (RSA *)0x0;
  local_58 = (X509 *)0x0;
  local_a8 = (RSA *)0x0;
  local_50 = param_2;
  pBVar2 = (BIO *)__create_bio_from_data();
  pcVar9 = "Failed to decode device public key.";
  if (pBVar2 == (BIO *)0x0) {
    local_98 = (RSA *)0x0;
  }
  else {
    local_38 = param_4;
    _PEM_read_bio_RSAPublicKey(pBVar2,&local_a8,0);
    _BIO_free(pBVar2);
    key = local_a8;
    local_98 = local_a8;
    if (local_a8 != (RSA *)0x0) {
      if (param_3 == 0) {
        pBVar2 = (BIO *)0x0;
        key_00 = _RSA_generate_key(0x800,0x10001,(callback *)0x0,(void *)0x0);
        if (key_00 == (RSA *)0x0) {
          pcVar9 = "Failed to generate root keypair.";
          pRStack_90 = key_00;
          goto LAB_001704d2;
        }
LAB_0017035d:
        pRStack_90 = key_00;
        if (param_5 == 0) {
          a = (BIO *)0x0;
          key_01 = _RSA_generate_key(0x800,0x10001,(callback *)0x0,(void *)0x0);
          if (key_01 == (RSA *)0x0) {
            local_88 = key_01;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar9 = "Failed to generate host keypair.";
            goto LAB_00170582;
          }
LAB_00170400:
          local_88 = key_01;
          local_40 = pBVar2;
          pEVar4 = _EVP_PKEY_new();
          pEStack_80 = pEVar4;
          if (pEVar4 == (EVP_PKEY *)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar9 = "Failed to root EVP key.";
            lVar7 = local_38;
            pBVar2 = local_40;
            goto LAB_00170677;
          }
          local_48 = a;
          pkey = _EVP_PKEY_new();
          a = local_48;
          local_78 = pkey;
          if (pkey == (EVP_PKEY *)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar9 = "Failed to host EVP key.";
            lVar7 = local_38;
            pBVar2 = local_40;
            goto LAB_00170677;
          }
          pEStack_70 = _EVP_PKEY_new();
          if (pEStack_70 == (EVP_PKEY *)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar9 = "Failed to device EVP key.";
            a = local_48;
            lVar7 = local_38;
            pBVar2 = local_40;
            goto LAB_00170677;
          }
          local_a0 = pEStack_70;
          iVar1 = _EVP_PKEY_assign(pEVar4,6,(char *)key_00);
          pBVar2 = local_40;
          a = local_48;
          if (iVar1 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar9 = "Failed to assign root RSA key.";
            lVar7 = local_38;
            goto LAB_00170677;
          }
          pRStack_90 = (RSA *)0x0;
          iVar1 = _EVP_PKEY_assign(pkey,6,(char *)key_01);
          pBVar2 = local_40;
          a = local_48;
          if (iVar1 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar9 = "Failed to assign host RSA key.";
            lVar7 = local_38;
            goto LAB_00170677;
          }
          local_88 = (RSA *)0x0;
          iVar1 = _EVP_PKEY_assign(local_a0,6,(char *)key);
          lVar7 = local_38;
          a = local_48;
          if (iVar1 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar9 = "Failed to assign device RSA key.";
            goto LAB_00170677;
          }
          local_98 = (RSA *)0x0;
          iVar1 = 0;
        }
        else {
          pvVar3 = (void *)_CFDataGetBytePtr(param_5);
          iVar1 = _CFDataGetLength(param_5);
          a = _BIO_new_mem_buf(pvVar3,iVar1);
          if (a != (BIO *)0x0) {
            key_01 = (RSA *)_PEM_read_bio_RSAPrivateKey(a,0,0,0);
            if (key_01 != (RSA *)0x0) goto LAB_00170400;
            local_88 = key_01;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar9 = "Failed to read private key.";
            lVar7 = local_38;
            goto LAB_00170677;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar9 = "Failed to create private key BIO.";
LAB_00170582:
          a = (BIO *)0x0;
          lVar7 = local_38;
LAB_00170677:
          __os_log_internal(0,_md_log_log,1,pcVar9);
          iVar1 = -1;
        }
        if (pBVar2 != (BIO *)0x0) {
LAB_0017068d:
          _BIO_free_all(pBVar2);
        }
        if (a != (BIO *)0x0) {
          _BIO_free_all(a);
        }
        lVar8 = local_50;
        if (iVar1 == 0) {
          if (local_50 != 0) {
            pvVar3 = (void *)_CFDataGetBytePtr(local_50);
            iVar1 = _CFDataGetLength(lVar8);
            pBVar2 = _BIO_new_mem_buf(pvVar3,iVar1);
            if (pBVar2 == (BIO *)0x0) {
              pcVar9 = "Failed to create cert BIO.";
            }
            else {
              x = (X509 *)_PEM_read_bio_X509(pBVar2,0,0,0);
              lVar8 = local_50;
              local_68 = x;
              if (x != (X509 *)0x0) goto LAB_00170716;
LAB_00170758:
              pcVar9 = "Failed to read X509.";
            }
            goto LAB_0017086b;
          }
          x = _X509_new();
          local_68 = x;
          if (x == (X509 *)0x0) {
LAB_00170864:
            pcVar9 = "Failed to create X509 cert.";
          }
          else {
LAB_00170716:
            local_68 = x;
            if (lVar7 == 0) {
              x_00 = _X509_new();
              pXStack_60 = x_00;
              if (x_00 == (X509 *)0x0) goto LAB_00170864;
            }
            else {
              pvVar3 = (void *)_CFDataGetBytePtr(lVar7);
              iVar1 = _CFDataGetLength(lVar7);
              pBVar2 = _BIO_new_mem_buf(pvVar3,iVar1);
              x_00 = (X509 *)_PEM_read_bio_X509(pBVar2,0,0,0);
              lVar8 = local_50;
              pXStack_60 = x_00;
              if (x_00 == (X509 *)0x0) goto LAB_00170758;
            }
            pXStack_60 = x_00;
            x_01 = _X509_new();
            pEVar4 = pEStack_80;
            local_58 = x_01;
            if (x_01 == (X509 *)0x0) goto LAB_00170864;
            iVar1 = _X509_set_pubkey(x,pEStack_80);
            if (iVar1 == 0) {
              pcVar9 = "Failed to set root cert public key.";
            }
            else {
              iVar1 = _X509_set_pubkey(x_00,local_78);
              if (iVar1 == 0) {
                pcVar9 = "Failed to set host cert public key.";
              }
              else {
                iVar1 = _X509_set_pubkey(x_01,pEStack_70);
                if (iVar1 != 0) {
                  if (lVar8 == 0) {
                    iVar1 = _X509_set_version(x,2);
                    if (iVar1 == 0) {
                      pcVar9 = "Failed to set root cert version.";
                    }
                    else {
                      pAVar5 = _X509_get_serialNumber(x);
                      _ASN1_INTEGER_set(pAVar5,0);
                      _X509_gmtime_adj(x->cert_info->validity->notBefore,0);
                      _X509_gmtime_adj(x->cert_info->validity->notAfter,0x12cc0300);
                      iVar1 = __add_ext(x,0x57,"critical,CA:TRUE");
                      if (iVar1 == 0) {
                        iVar1 = __add_ext(x,0x52,"hash");
                        if (iVar1 == 0) goto LAB_001707e2;
                        pcVar9 = "Failed to set root cert key identifier.";
                      }
                      else {
                        pcVar9 = "Failed to set root cert basic constraints.";
                      }
                    }
                  }
                  else {
LAB_001707e2:
                    if (local_38 == 0) {
                      iVar1 = _X509_set_version(x_00,2);
                      if (iVar1 == 0) {
                        pcVar9 = "Failed to set host cert version.";
                      }
                      else {
                        pAVar5 = _X509_get_serialNumber(x_00);
                        _ASN1_INTEGER_set(pAVar5,0);
                        _X509_gmtime_adj(x_00->cert_info->validity->notBefore,0);
                        _X509_gmtime_adj(x_00->cert_info->validity->notAfter,0x12cc0300);
                        iVar1 = __add_ext(x_00,0x57,"critical,CA:FALSE");
                        if (iVar1 == 0) {
                          iVar1 = __add_ext(x_00,0x52,"hash");
                          if (iVar1 == 0) {
                            iVar1 = __add_ext(x_00,0x53,"critical,digitalSignature,keyEncipherment")
                            ;
                            if (iVar1 == 0) goto LAB_001707ed;
                            pcVar9 = "Failed to set host cert key usage.";
                          }
                          else {
                            pcVar9 = "Failed to set host cert key identifier.";
                          }
                        }
                        else {
                          pcVar9 = "Failed to set host cert basic constraints.";
                        }
                      }
                    }
                    else {
LAB_001707ed:
                      iVar1 = _X509_set_version(x_01,2);
                      if (iVar1 == 0) {
                        pcVar9 = "Failed to set device cert version.";
                      }
                      else {
                        pAVar5 = _X509_get_serialNumber(x_01);
                        _ASN1_INTEGER_set(pAVar5,0);
                        _X509_gmtime_adj(x_01->cert_info->validity->notBefore,0);
                        _X509_gmtime_adj(x_01->cert_info->validity->notAfter,0x12cc0300);
                        iVar1 = __add_ext(x_01,0x57,"critical,CA:FALSE");
                        if (iVar1 == 0) {
                          iVar1 = __add_ext(x_01,0x52,"hash");
                          if (iVar1 == 0) {
                            iVar1 = __add_ext(x_01,0x53,"critical,digitalSignature,keyEncipherment")
                            ;
                            if (iVar1 == 0) {
                              if (lVar8 == 0) {
                                pEVar6 = _EVP_sha1();
                                iVar1 = _X509_sign(x,pEVar4,pEVar6);
                                if (iVar1 != 0) goto LAB_00170bc9;
                                pcVar9 = "Failed to sign root cert.";
                              }
                              else {
LAB_00170bc9:
                                if (local_38 == 0) {
                                  pEVar6 = _EVP_sha1();
                                  iVar1 = _X509_sign(x_00,pEVar4,pEVar6);
                                  if (iVar1 == 0) {
                                    pcVar9 = "Failed to sign host cert.";
                                    goto LAB_00170ceb;
                                  }
                                }
                                pEVar6 = _EVP_sha1();
                                iVar1 = _X509_sign(x_01,pEVar4,pEVar6);
                                if (iVar1 != 0) {
                                  lVar7 = _CreatePairingGoo(&local_98);
                                  if (lVar7 != 0) goto LAB_001708ca;
                                  pcVar9 = "Failed to create pairing data.";
                                  goto LAB_0017089d;
                                }
                                pcVar9 = "Failed to sign device cert.";
                              }
LAB_00170ceb:
                              if (_md_log_onceToken != -1) {
                                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                              }
                              __os_log_internal(0,_md_log_log,1,pcVar9);
                              pcVar9 = "Failed to sign certificates.";
                              goto LAB_0017089d;
                            }
                            pcVar9 = "Failed to set device cert key usage.";
                          }
                          else {
                            pcVar9 = "Failed to set device cert key identifier.";
                          }
                        }
                        else {
                          pcVar9 = "Failed to set device cert basic constraints.";
                        }
                      }
                    }
                  }
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,1,pcVar9);
                  pcVar9 = "Failed to fill out certificates.";
                  goto LAB_0017089d;
                }
                pcVar9 = "Failed to set device cert public key.";
              }
            }
          }
LAB_0017086b:
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,1,pcVar9);
          pcVar9 = "Failed to create certificates.";
          goto LAB_0017089d;
        }
      }
      else {
        pvVar3 = (void *)_CFDataGetBytePtr(param_3);
        iVar1 = _CFDataGetLength(param_3);
        pBVar2 = _BIO_new_mem_buf(pvVar3,iVar1);
        if (pBVar2 != (BIO *)0x0) {
          key_00 = (RSA *)_PEM_read_bio_RSAPrivateKey(pBVar2,0,0);
          if (key_00 != (RSA *)0x0) goto LAB_0017035d;
          pRStack_90 = key_00;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar7 = local_38;
          a = (BIO *)0x0;
          __os_log_internal(0,_md_log_log,1,"Failed to read private key.");
          iVar1 = -1;
          goto LAB_0017068d;
        }
        pcVar9 = "Failed to create private key BIO.";
LAB_001704d2:
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,pcVar9);
      }
      pcVar9 = "Failed to create keypairs.";
    }
  }
LAB_0017089d:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  lVar7 = 0;
  __os_log_internal(0,_md_log_log,1,pcVar9);
LAB_001708ca:
  if (local_98 != (RSA *)0x0) {
    _RSA_free(local_98);
  }
  if (pRStack_90 != (RSA *)0x0) {
    _RSA_free(pRStack_90);
  }
  if (local_88 != (RSA *)0x0) {
    _RSA_free(local_88);
  }
  if (pEStack_80 != (EVP_PKEY *)0x0) {
    _EVP_PKEY_free(pEStack_80);
  }
  if (local_78 != (EVP_PKEY *)0x0) {
    _EVP_PKEY_free(local_78);
  }
  if (pEStack_70 != (EVP_PKEY *)0x0) {
    _EVP_PKEY_free(pEStack_70);
  }
  if (local_68 != (X509 *)0x0) {
    _X509_free(local_68);
  }
  if (pXStack_60 != (X509 *)0x0) {
    _X509_free(pXStack_60);
  }
  if (local_58 != (X509 *)0x0) {
    _X509_free(local_58);
  }
  return lVar7;
}

