// rea decompile_all
// name: _AMAuthInstallApImg4LocalRegisterKeys
// address: 0x27acce
// body: available
// range: 0x27acce-0x27af94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4LocalRegisterKeys(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  cfstringStruct *pcVar15;
  
  iVar14 = 1;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(char *)(lVar1 + 0x14) == '\0') {
      if (*(long *)(param_1 + 0x188) == 0) {
        if ((*(char *)(lVar1 + 0x48) == '\0') && (*(int *)(lVar1 + 0x10) == 0)) {
          pcVar15 = &cf_ap_ticket_unfused_key_private;
        }
        else if (*(char *)(lVar1 + 0x49) == '\0') {
          pcVar15 = &cf_ap_ticket_localpolicy_hacktivation_key_private;
          if (*(char *)(param_1 + 0x1f9) == '\0') {
            pcVar15 = &cf_ap_ticket_dev_key_private;
          }
        }
        else if (*(int *)(lVar1 + 8) == 0x8010) {
          pcVar15 = &cf_ap_ticket_insec_rsa4k_key_private;
        }
        else {
          if (*(int *)(lVar1 + 8) != 0x8960) {
            _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalRegisterKeys","unrecognized chipid: 0x%08X"
                             );
            return 1;
          }
          pcVar15 = &cf_ap_ticket_insec_rsa1k_key_private;
        }
        *(cfstringStruct **)(param_1 + 0x188) = pcVar15;
      }
      cVar2 = _CFDictionaryContainsKey
                        (*(undefined8 *)(param_1 + 0x178),&cf_ap_ticket_dev_key_private);
      iVar14 = 0;
      if (cVar2 == '\0') {
        iVar3 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                          (param_1,&cf_ap_ticket_insec_rsa1k_key,
                           &_kImg4TicketInsecureRsa1kPrivateKey,1);
        iVar4 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                          (param_1,&cf_ap_ticket_insec_rsa4k_key,
                           &_kImg4TicketInsecureRsa4kPrivateKey,1);
        iVar5 = _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                          (param_1,&cf_ap_ticket_8960_insec_cert,
                           "-----BEGIN CERTIFICATE-----\nMIID9TCCAt2gAwIBAgICAcswDQYJKoZIhvcNAQEFBQAwfjELMAkGA1UEBhMCVVMx\nEzARBgNVBAoTCkFwcGxlIEluYy4xJjAkBgNVBAsTHUFwcGxlIENlcnRpZmljYXRp\nb24gQXV0aG9yaXR5MTIwMAYDVQQDEylBcHBsZSBTZWN1cmUgQm9vdCBDZXJ0aWZp\nY2F0aW9uIEF1dGhvcml0eTAeFw0xMjAzMTAwMTA5MDNaFw0yMjAzMTEwMTA5MDNa\nMFoxCzAJBgNVBAYTAlVTMRMwEQYDVQQKEwpBcHBsZSBJbmMuMQwwCgYDVQQLEwNF\nVFMxKDAmBgNVBAMTH0g2LUxvY2FsU2lnbmluZ1Rvb2wtTWFuaWZlc3RLZXkwgZ8w\nDQYJKoZIhvcNAQEBBQADgY0AMIGJAoGBAMuseSYow8YnNz8eBNQdLpVR+a0qe11v\n44RCR3FgD5tOGmcdPQaTUW26waFp/8uYeaNcGvZBAVZscw0sKatPeKY9wqJsrLut\nszCwrx76Lwovb0XPtp7ipMtZpqs6dvcf7lfXweWkcAjbM9bSL7syCqI+uVVgouxg\nnfoLuozeWCcDAgMBAAGjggEjMIIBHzALBgNVHQ8EBAMCB4AwHQYDVR0OBBYEFFyR\nzK/HX0Ks/bqoc1uUycvE69FcMB8GA1UdIwQYMBaAFEk9NlPJ1xXhhmFOrKurGFZj\nXcPGMIHPBgoqhkiG92NkBgEPAQH/BIG9MYG6/4TqhZxQgY4wgYsWBE1BTlAxgYL/\nhJK9pEQMMAoWBEJPUkSgAgUA/4SalaBPCzAJFgRDRVBPAgEA/4SaoZJQDTALFgRD\nSElQAgMAiWD/hJrBpE8LMAkWBENQUk8BAQD/hJrNikMLMAkWBENTRUMBAQD/hKqN\nkkQMMAoWBEVDSUSgAgUA/4WakZ5NCzAJFgRTRE9NAgEB/4T6iZRQHTAbFgRPQkpQ\nMRP/hKKdplQMMAoWBERHU1SgAgUAMA0GCSqGSIb3DQEBBQUAA4IBAQDtop/YR86c\nVnSmStQep97BOqszQFGQqyUC05vRW+RoXhGKPEs2EJ/OGHBwfkaDfjJhVmE4CbOP\nW8LzgAlxOrDLgYAR/IB70+3Dyqtk97BaJbKu5KKk3psuTNJo8L7TgvfBlC0d5aKX\n4Qh5Nbkvmj2D+4W/H3i6+NaYgZZDLa0b7VyZsLLJPEpc/EdqJGHVsa8J3foQsjXs\noEt4lxGw3/A28Xp4Th4drmI6PYaoIu2NPaBvA3RDlhejmJHRr9827I/hw6s7dI64\n/8wkbReTRF7bmzvjfmWi/M4drGbeRIm9hN7pDOXno2dp4WJGhQNR5wNB+YcpcCXF\nlU85U7sxQ34E\n-----END CERTIFICATE-----\n"
                           ,0x599);
        iVar6 = _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                          (param_1,&cf_ap_ticket_8002_insec_cert,&_kImg4Ticket8002InsecureCert,0x95b
                          );
        iVar7 = _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                          (param_1,&cf_ap_ticket_8010_insec_cert,
                           "-----BEGIN CERTIFICATE-----\n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\nxXP5F..." /* TRUNCATED STRING LITERAL */
                           ,0x95b);
        iVar8 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer(param_1,&cf_ap_ticket_dev_key,"",1);
        iVar9 = _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                          (param_1,&cf_ap_ticket_8960_dev_cert,
                           "-----BEGIN CERTIFICATE-----\nMIIEpTCCA42gAwIBAgICAcwwDQYJKoZIhvcNAQEFBQAwfjELMAkGA1UEBhMCVVMx\nEzARBgNVBAoTCkFwcGxlIEluYy4xJjAkBgNVBAsTHUFwcGxlIENlcnRpZmljYXRp\nb24gQXV0aG9yaXR5MTIwMAYDVQQDEylBcHBsZSBTZWN1cmUgQm9vdCBDZXJ0aWZp\nY2F0aW9uIEF1dGhvcml0eTAeFw0xMjA0MjAyMjIwNTdaFw0yMjA0MjEyMjIwNTda\nMF8xCzAJBgNVBAYTAlVTMRMwEQYDVQQKEwpBcHBsZSBJbmMuMQwwCgYDVQQLEwNF\nVFMxLTArBgNVBAMTJEg2LUxvY2FsU2lnbmluZ1Rvb2wtTWFuaWZlc3RLZXktUmV2\nQjCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMg9UZgoUPe390Qc2GFn\nePp/Vb+WPT+AqqBra4BcPBBFVGWkpWWN+xuFnjWFuM3+Dr78fG35Ul9dxIO3Mq31\n9z62bkv3Oa7Mqv3+LSDr/5k/22C05Je/r+ZHeDmEqROvXGgEPFDKmbCon7zXHOVO\nGsKWmBLnqO44aoKZv44WTTCEVhFKbPbcCfYKWUduDNrQb/a8BjjZ665QFOT2EaWJ\n9Opk3e4gbgQ63H+SGkW1wPYZdJaz/mJIa7vfsRGDzvixgd3JLiLRo+i+yC68qPvx\neWyyLcZgG2vI7rFUzKtabEj377Ff2PKTqvvZLcMkwjJqhi6UHSnfNXxaJETId1Bk\ngKkCAwEAAaOCAUowggFGMAsGA1UdDwQEAwIHgDAdBgNVHQ4EFgQUt1d7Aa0k0BPA\n+Xn7JiEEvX+1bdQwHwYDVR0jBBgwFoAUST02U8nXFeGGYU6sq6sYVmNdw8YwgfYG\nCiqGSIb3Y2QGAQ8BAf8EgeQxgeH/hOqFnFCBtTCBshYETUFOUDGBqf+EkrmGSAww\nChYEQk5DSKACBQD/hJK9pEQMMAoWBEJPUkSgAgUA/4SalaBPCzAJFgRDRVBPAgEA\n/4SaoZJQDTALFgRDSElQAgMAiWD/hJrBpE8LMAkWBENQUk8BAQD/hJrNikMMMAoW\nBENTRUOgAgUA/4SqjZJEDDAKFgRFQ0lEoAIFAP+FmpGeTQswCRYEU0RPTQIBAf+H\nm7nebgwwChYEc25vbqACBQD/hPqJlFAdMBsWBE9CSlAxE/+Eop2mVAwwChYEREdT\nVKACBQAwDQYJKoZIhvcNAQEFBQADggEBAKOZtqD0jOwJ3yLBJetGGEwovwaIS7Y2\nIn0TudpWIdYmAjPqBnVKosVAdRveYb/PG8hh3UKzT22R0WAFeEcChBIcn+GjIqdK\nBZOBr74hRlCA4FVcaKFjU3rCDj6x+hHZKiWjsRLSuOiOxXmMLsX5F+ewajIOzCPl\n1YzvpNC211yU31GPst+onEdbqDNmU/iHLDC/YA1Jj25pfmL46sGYjbpKv2vpr/8I\nhbRRC1LsFNvVPUL5cGd9SJ9O/5EqrT6RPpXBfBU4Ag8ufm9FfGtgIZMxIpL1/l+x\ngAV5Aow/gls4Tso7ZgQd1ijzKH5NwRTcZuJvO1jeeEdgwMa2OKGPdRY=\n-----END CERTIFICATE-----\n"
                           ,0x688);
        iVar10 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                           (param_1,&cf_ap_ticket_unfused_key,&_kImg4TicketUnfusedPrivatekey,1);
        iVar11 = _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                           (param_1,&cf_ap_ticket_8960_unfused_cert,
                            "-----BEGIN CERTIFICATE-----\nMIIEbDCCA1SgAwIBAgICAecwDQYJKoZIhvcNAQEFBQAwfjELMAkGA1UEBhMCVVMx\nEzARBgNVBAoTCkFwcGxlIEluYy4xJjAkBgNVBAsTHUFwcGxlIENlcnRpZmljYXRp\nb24gQXV0aG9yaXR5MTIwMAYDVQQDEylBcHBsZSBTZWN1cmUgQm9vdCBDZXJ0aWZp\nY2F0aW9uIEF1dGhvcml0eTAeFw0xMjA5MjAxODA0MjhaFw0yMjA5MjExODA0Mjha\nMGMxCzAJBgNVBAYTAlVTMRMwEQYDVQQKEwpBcHBsZSBJbmMuMQwwCgYDVQQLEwNF\nVFMxMTAvBgNVBAMTKEg2LU1mZy1Mb2NhbFNpZ25pbmdUb29sLU1hbmlmZXN0S2V5\nLVJldkMwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC7gT7WPW6BxOmB\n9CsotfsZDj9NHhgph8b8STzxBqJRvooAbidH+QmtHrYyv75EyUg40C8OLzTelQGF\nLhH6SiEr0C2IdUH+PEunbtiKwleRpufibIIaFwneiCS/WAJjKzuBqGcST2PvtxaU\n+rFpxfVvgI3MXidOtXmx+wMyKp+yJy1s2ZJJuHLvqXEZ0IHRfZ8etOHEtlGszsFe\nmANWl/31Wo7JF/qy0J4YRCMUsKMnn3TATPuGt2P/kXsA81EytJwCaxydxkQTArNf\nB5IgTRBmT/Z+lTC2kmN7/KwPgVmYb5QTQ10l6+G1MlLsGkPUA5cHa1/LeNoOzmHp\n/YFPJdA9AgMBAAGjggENMIIBCTALBgNVHQ8EBAMCB4AwHQYDVR0OBBYEFN+Ww//N\n8Fgs4ISQqTwOBH48DE/VMB8GA1UdIwQYMBaAFEk9NlPJ1xXhhmFOrKurGFZjXcPG\nMIG5BgoqhkiG92NkBgEPAQH/BIGnMYGk/4TqhZxQeTB3FgRNQU5QMW//hJK9pEQM\nMAoWBEJPUkSgAgUA/4SalaBPCzAJFgRDRVBPAgEA/4SaoZJQDTALFgRDSElQAgMA\niWD/hJrBpE8LMAkWBENQUk8BAQD/hJrNikMLMAkWBENTRUMBAQD/hZqRnk0LMAkW\nBFNET00CAQD/hPqJlFAdMBsWBE9CSlAxE/+Eop2mVAwwChYEREdTVKACBQAwDQYJ\nKoZIhvcNAQEFBQADggEBACOlbkz1sF/bB4J60ViL6EzpD0DCgu05LmMtuUWqoz48\nj/roRrGAH1vIxhiEU/RkNouDHQn0yNuL7aViXM+RSJOnx7HUiShIVMhJYmOh1Uq6\nqm/H+0VfcXmRAuXAbSdvEuFzG1l/WdK5EOvjDn4lZjKVvFRJQs1vhJN4GqV/fTDP\nF4SQXDBNwIKuXzBn+z1m7gpAcW7XDiNVNYBOO3T/o38ZR4bHfplFY4eaS1oylAw5\nvh7IPxehD+r7CS7WslbSHuPGW+i9V7eSDKxziD6Zs/S1drkQ2c35lsH9JVsOdvq8\noI04qZKxRbjfW7jXMMxkibXWtow5NCam4qiSqRbui7Y=\n-----END CERTIFICATE-----\n"
                            ,0x63b);
        iVar12 = _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                           (param_1,&cf_ap_ticket_ca_cert,&_kImg4TicketCACert,0x59d);
        iVar13 = _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                           (param_1,&cf_ap_ticket_localpolicy_hacktivation_leaf_cert,
                            &_kImg4TicketLocalPolicyHacktivationLeafCert,0x916);
        iVar14 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                           (param_1,&cf_ap_ticket_localpolicy_hacktivation_key_private,
                            &_kImg4TicketLocalPolicyHacktivationKey,1);
        if ((((iVar10 == 0 || iVar8 == 0) || (iVar4 == 0 || iVar3 == 0)) || iVar14 == 0) &&
           ((((iVar5 == 0 || (iVar6 == 0)) || (iVar7 == 0)) ||
            (((iVar9 == 0 || (iVar11 == 0)) || ((iVar12 == 0 || (iVar13 == 0)))))))) {
          iVar14 = 0;
          _AMAuthInstallLog(6,"AMAuthInstallApImg4LocalRegisterKeys",
                            "ap local signing keys available");
        }
      }
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalRegisterKeys",
                        "local signing is not available for production fused devices.");
      iVar14 = 0xe;
    }
  }
  return iVar14;
}

