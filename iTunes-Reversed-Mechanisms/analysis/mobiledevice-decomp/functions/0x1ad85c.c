// rea decompile_all
// name: _AMAuthInstallMonetLocalRegisterKeys
// address: 0x1ad85c
// body: available
// range: 0x1ad85c-0x1adc2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallMonetLocalRegisterKeys(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  cVar2 = _CFDictionaryContainsKey(*(undefined8 *)(param_1 + 0x178),&cf_bb_monet_rom_dbl_public);
  if (cVar2 != '\0') {
    return 0;
  }
  _AMAuthInstallCryptoRegisterKeysFromPEMBuffer(param_1,&cf_bb_monet_rom_enandprog,"",1);
  _AMAuthInstallCryptoRegisterKeysFromPEMBuffer(param_1,&cf_bb_monet_ticket_activation,"",1);
  _AMAuthInstallCryptoRegisterKeysFromPEMBuffer(param_1,&cf_bb_monet_ticket_calibration,"",1);
  _AMAuthInstallCryptoRegisterKeysFromPEMBuffer(param_1,&cf_bb_monet_ticket_provisioning,"",1);
  _AMAuthInstallCryptoRegisterCertFromPEMBuffer
            (param_1,&cf_bb_monet_rom_general_attestationca,&_kMonetAttestationCACert,0x4e6);
  _AMAuthInstallCryptoRegisterCertFromPEMBuffer
            (param_1,&cf_bb_monet_rom_enandprog_attestation,
             "-----BEGIN CERTIFICATE-----\nMIIDoTCCAomgAwIBAgIBZTANBgkqhkiG9w0BAQUFADBtMREwDwYDVQQKDAhNYXZl\ncmljazFDMEEGA1UEAww6VGVzdCBBdHRlc3RhdGlvbiBDQSAoOTUxZjkzOWItYmJi\nYy00NTc0LTk5ZjUtNGExN2M3ODc0YzFkKTETMBEGA1UECAwKQ2FsaWZvcm5pYTAe\nFw0xMDA0MjYyMzI0MjBaFw0xMTA0MjYyMzI0MjBaMIGaMREwDwYDVQQKDAhNYXZl\ncmljazEWMBQGA1UECwwNMDcgMDAwMCBTSEEtMTEiMCAGA1UECwwZMDEgMDAwMDAw\nMDAwMDAwMDAwMyBTV19JRDFJMEcGA1UEAwxAVGVzdCBEQkwgQXR0ZXN0YXRpb24g\nQ2VydCAoYWIxMTZiYWMtMDdmNi00OGFhLWEwY2EtZTZlZjlhNWY1YTk1KTCCASAw\nDQYJKoZIhvcNAQEBBQADggENADCCAQgCggEBANm3yyXXSgM7EBBUN5QKgmX3JaHG\nyrrVrbm9CETrO+Yg2VnH4Ivi5cOA3+5MuxNQeSlSFATXsjMJVkZpyc1EG5ajIzcr\n0o1qSsP5bsQ7pJ+Gm/nFW0aLjUnFnHK7oLkH/8o9VKC7T+hTlHlJ1xP0JuYk6k7r\nPHAShIW9NemcfQiRcFrpyHX3NvQrfthzF5Rrkytm0tcrx4aL1eFunBl1hake5ky0\n45S6kbrHRoTNNBiD4GLdGYH9myHnSSMhsNLvETk98Q6v63faUZ0s17DgubO3Nh4b\nRXMOyaLT74iqWOUdoWT/CzCGgbVVHEUWQExXjKH9c4Ng/FIYihlTMpPApBUCAQOj\nIDAeMAwGA1UdEwEB/wQCMAAwDgYDVR0PAQH/BAQDAgTwMA0GCSqGSIb3DQEBBQUA\nA4IBAQBXG+NKtZtYsJCHoYUPpQ5X3n+eM3CZKsQyb9PZ094H8c+hBY9v4y0k1zWm\nvC7pveezFvTO+YBkMydOds0lPp7n2Srb+rKu1npAl2B5/Z7w+tpGgjpfjX8yHgSF\nrtsyAycVMUfuQdNExYaZu09vad2cGf1riOVgPJjky7+RdzEbXrzak7mny/XZKOvh\neccblrKLlNT414mai+u4MNwCOv+/N9WCxU2PTv5Js3W7tBq7Gc3m03mBxTDkqGGh\nstr7zeyo86fgMJ+pMtk3A+FmDHqv+YVE4OP+KJXSfIo9EklMGNFgu6eLq1chW8wY\nZyIl8/vzxRL4Df1jT3p8tDAmRiGo\n-----END CERTIFICATE-----\n"
             ,0x527);
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  if (iVar1 < 0x19f0e1) {
    if (iVar1 < 0xe50e1) {
      if (iVar1 == 0x3b0e1) goto LAB_001adafe;
      if (iVar1 == 0x7f0e1) {
        _AMAuthInstallCryptoRegisterKeysFromECCBuffer
                  (param_1,&cf_bb_monet_ticket_root,&_kMonetRootBBTicketMav18PrivateKey,1);
        _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                  (param_1,&cf_bb_monet_ticket_leafcert,
                   "-----BEGIN CERTIFICATE-----\nMIICnDCCAiKgAwIBAgIIGD59PvnySTcwCgYIKoZIzj0EAwMwSTElMCMGA1UEAwwc\nRXVyZWthIFNlY3VyZSBCb290IFJvb3QgQ0EgMjETMBEGA1UECgwKQXBwbGUgSW5j\nLjELMAkGA1UEBhMCVVMwHhcNMTcwNDIwMDEyNTUxWhcNMTcwNDIxMDExNjMyWjBG\nMSIwIAYDVQQDDBlNQVYtTG9jYWwtUmV2Qi1EYXRhQ2VudGVyMRMwEQYDVQQKDApB\ncHBsZSBJbmMuMQswCQYDVQQGEwJVUzB2MBAGByqGSM49AgEGBSuBBAAiA2IABLhN\niuyVaD9HtZD7iSkTiw0+1dfKbDHz3d/+V/5u/qDg2Lu9oY3ZiG/l1RSTatPra+w/\niSoSeghGtmjgzNNpw0HBJQLiCvvKnC9ESVMO7RG2Yu/h23PbGPHhdvtnRxVoPaOB\n2TCB1jAMBgNVHRMBAf8EAjAAMB8GA1UdIwQYMBaAFJhrqK+l31CPKfSFJz4lrp3Z\n3BfsMB0GA1UdDgQWBBSxfmfaqHbc3kPn6oU/a4WJFysl6TAOBgNVHQ8BAf8EBAMC\nB4AwdgYJKoZIhvdjZAYqAQH/BGYxZP+E6oWcUF0wWxYETUFOUDFT/4SalaBPCzAJ\nFgRDRVBPAgEA/4aTveBoOjA4FgRib3BoBDBtSfixjAskaTXC09b5z3eLs5LFxA/E\nKhPaLC5S7dHBc8LyVZXbmxXaZBs/5FzcBC4wCgYIKoZIzj0EAwMDaAAwZQIxANep\nnSQ0jsbfV9y4viLWl6S53CxszVjqQJTeo1Gb1D9MScbEJn+ldNyXOw8wPhGN8gIw\nFbTXbG86aO2/7vhTDomKYw5YOpDHz3FKefK1r/yxNhw16rbS/21Z3C7a6F8YTAnp\n-----END CERTIFICATE-----\n"
                   ,0x3c5);
        _AMAuthInstallCryptoRegisterKeysFromECCBuffer
                  (param_1,&cf_bb_monet_ticket_leafcert_private,&_kMonetBBTicketMav18PrivateKey,1);
        _AMAuthInstallCryptoRegisterKeysFromECCBuffer
                  (param_1,&cf_bb_monet_rom_dbl,&_kMonetAttestationSBLMav18PrivateKey,1);
        _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                  (param_1,&cf_bb_monet_rom_dbl_attestation,
                   "-----BEGIN CERTIFICATE-----\nMIICVDCCAdugAwIBAgIJANpKs+baXScJMAoGCCqGSM49BAMDMHwxCzAJBgNVBAYT\nAlVTMRIwEAYDVQQHDAlDdXBlcnRpbm8xEzARBgNVBAgMCkNhbGlmb3JuaWExDDAK\nBgNVBAoMA01hdjERMA8GA1UECwwIU2VjdXJpdHkxIzAhBgNVBAMMGk1hdiBMb2Nh\nbCBSb290IENlcnRpZmljYXRlMB4XDTE3MDMxOTAwNTM1MVoXDTM3MDMxNDAwNTM1\nMVowgaYxCzAJBgNVBAYTAlVTMRIwEAYDVQQHDAlDdXBlcnRpbm8xEzARBgNVBAgM\nCkNhbGlmb3JuaWExDDAKBgNVBAoMA01hdjEiMCAGA1UECwwZMDEgMDAwMDAwMDAw\nMDAwMDAwMCBTV19JRDEXMBUGA1UECwwOMDcgMDAwMiBTSEEzODQxIzAhBgNVBAMM\nGk1hdiBMb2NhbCBMZWFmIENlcnRpZmljYXRlMHYwEAYHKoZIzj0CAQYFK4EEACID\nYgAEkEpZfhzwy4wdgfX1Gv8kCutn1b99oYgelk66xI/fwANXH1EbBIE6OnfqF//h\nvT8UdHO7ND1bvUDqWj5PmMki50KmbI6nZ0hIvFHJwwDB9XDxuvyxKr0eiZ/mfJjF\np8D6MAoGCCqGSM49BAMDA2cAMGQCMCLsFOJmWMsl5NlJCO3qIcCMsOVWliVXwro5\ndp5pQq1uYds8/qGMQ1dtrE1q6zL9XQIwWEScN+aGVfSzFz/43sJPGRd/Apj2Fmob\nHn9wa6X3H194pLbSX3zeMJe9i77fO1dI\n-----END CERTIFICATE-----\n"
                   ,0x364);
        pcVar4 = 
        "-----BEGIN CERTIFICATE-----\nMIICKjCCAbCgAwIBAgIJAK/rOfTIN47iMAoGCCqGSM49BAMDMHwxCzAJBgNVBAYT\nAlVTMRIwEAYDVQQHDAlDdXBlcnRpbm8xEzARBgNVBAgMCkNhbGlmb3JuaWExDDAK\nBgNVBAoMA01hdjERMA8GA1UECwwIU2VjdXJpdHkxIzAhBgNVBAMMGk1hdiBMb2Nh\nbCBSb290IENlcnRpZmljYXRlMB4XDTE3MDMxOTAwNTEwMloXDTM3MDMxNDAwNTEw\nMlowfDELMAkGA1UEBhMCVVMxEjAQBgNVBAcMCUN1cGVydGlubzETMBEGA1UECAwK\nQ2FsaWZvcm5pYTEMMAoGA1UECgwDTWF2MREwDwYDVQQLDAhTZWN1cml0eTEjMCEG\nA1UEAwwaTWF2IExvY2FsIFJvb3QgQ2VydGlmaWNhdGUwdjAQBgcqhkjOPQIBBgUr\ngQQAIgNiAATYki2O17E6A6XBIkNfKfBuufxf0EAzH8I8IxtQs+WMXvCywdPl45fd\nZbUezf26YgIJz248wKxENKmeTXX2VNCtOBqLJzV/XHBGaYJYWJ2ouXH7qqJ6a+uv\nXSJ92Q6PnVAwCgYIKoZIzj0EAwMDaAAwZQIwM6eoRde+zGcTTbS3hUxRiQR3hEjN\nHJI3CzTkAyjqCqYxWxXvsSRUnlNhTasemcLyAjEA7CFAg1cD3gMC3CgHOo6sFXM0\nOgU9yF4gj7sq3/12dLFBASC//fP3AJmTdtSB8g8i\n-----END CERTIFICATE-----\n"
        ;
        uVar3 = 0x32b;
        goto LAB_001ada16;
      }
    }
    else if (((iVar1 == 0xe50e1) || (iVar1 == 0x1440e1)) || (iVar1 == 0x1720e1)) goto LAB_001ad979;
LAB_001adbc3:
    _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
              (param_1,&cf_bb_monet_ticket_root,&_kMonetTicketRootPrivateKey,1);
    _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
              (param_1,&cf_bb_monet_rom_dbl,&_kMonetAttestationDblCertPrivateKey,1);
    _AMAuthInstallCryptoRegisterCertFromPEMBuffer
              (param_1,&cf_bb_monet_rom_dbl_attestation,
               "-----BEGIN CERTIFICATE-----\nMIIDnTCCAoWgAwIBAgIBZDANBgkqhkiG9w0BAQUFADBtMREwDwYDVQQKDAhNYXZl\ncmljazFDMEEGA1UEAww6VGVzdCBBdHRlc3RhdGlvbiBDQSAoOTUxZjkzOWItYmJi\nYy00NTc0LTk5ZjUtNGExN2M3ODc0YzFkKTETMBEGA1UECAwKQ2FsaWZvcm5pYTAe\nFw0xMDA0MjYyMzI0MjBaFw0xMTA0MjYyMzI0MjBaMIGWMREwDwYDVQQKDAhNYXZl\ncmljazEWMBQGA1UECwwNMDcgMDAwMCBTSEEtMTEiMCAGA1UECwwZMDEgMDAwMDAw\nMDAwMDAwMDAwMCBTV19JRDFFMEMGA1UEAww8VGVzdCBBdHRlc3RhdGlvbiBDZXJ0\nIChmYjE1MzcyZC1hOTkyLTQ5OTQtYjYwNC03YTkxNTkwMjY5OWEpMIIBIDANBgkq\nhkiG9w0BAQEFAAOCAQ0AMIIBCAKCAQEAnvqBksSy3vCMAsjREzJ53oiP5qZPwViM\nnVy/uS12I1CKR4QhNOwnegklRejn6nXebGZnCC30NIMQSGTOOVIL2NRtLqPZzOyO\nSTQAiqdZPf4tEfe0ApYyQk6RjeHZKBkusOQx5bP9cizMaMUYB47KCxLeoAlnWjkN\nNFJ/Zx2bBrTfPgm7Y0nFar6r0TvqzRqZu0VQ7Cj5XdwsmWR3teuwIHmKkV/VNJQx\n41Y8nVjj4FcQhVfZGusQVFqtXUhD9uac9DiRiP6Z9ktQeS0lUEJeR3mawU8vshIU\nr49pSYMScY9a7G6EDoF4krJsU11Bn3Xf4A14YIO2LcI2mL9uULu0cQIBA6MgMB4w\nDAYDVR0TAQH/BAIwADAOBgNVHQ8BAf8EBAMCBPAwDQYJKoZIhvcNAQEFBQADggEB\nAKElopiZfk4KBMF0e5qn3OMR2rMLMhTddYTm+R9zfwTdYcUc1qazUjJ+fuNwa3sE\nvAK9HAkyKjBlnATX4gBv3qxmJ3iYI5mPjQGONmp+JyYyMTdJGJoIoPn8d0RhsnT3\n6MMAqKk9CyuX3R1a5vl55hmn1hxBWJRExqVFo7C2hcTz3kGkrLxeKnouVluxUOko\n7E+mgPmJn2OVWnGxPlHuV3epJCsuzosaWiDGPSynhMkM/FDSLMiTJ4NjMKEDPykp\nrYzTMrsuPb84qQrD94rCqVXoL3tWn20uwYyeBXtM1evcaGho/bmjAVmpLp1Kzr0L\nvH5xwPLtMpWSQWzsnCh39Og=\n-----END CERTIFICATE-----\n"
               ,0x523);
    pcVar4 = 
    "-----BEGIN CERTIFICATE-----\nMIIDaDCCAlCgAwIBAgIBATANBgkqhkiG9w0BAQUFADBmMREwDwYDVQQKDAhNYXZl\ncmljazE8MDoGA1UEAwwzVGVzdCBSb290IENBIChjMTlmOGY5ZC04NGMxLTQxMDct\nYjA4NC00N2NhZjAyZTVjYjcpMRMwEQYDVQQIDApDYWxpZm9ybmlhMB4XDTEwMDQy\nMDIzMzA0NVoXDTExMDQyMDIzMzA0NVowZjERMA8GA1UECgwITWF2ZXJpY2sxPDA6\nBgNVBAMMM1Rlc3QgUm9vdCBDQSAoYzE5ZjhmOWQtODRjMS00MTA3LWIwODQtNDdj\nYWYwMmU1Y2I3KTETMBEGA1UECAwKQ2FsaWZvcm5pYTCCASAwDQYJKoZIhvcNAQEB\nBQADggENADCCAQgCggEBAMu6KMgKMCm8f75rPZ/+ApHECSk7ndnQwb3umE1LP57y\nezlbxPHa1G/BtVf8ws091X91jnUPEa5KIjOAvbuMAkY9jlsDYKFyx+H93EcP4KN1\nuQD+zJD8nSMZQgzy68FpXSmkN+o/EHtqmvVb7ekWRTv23mIoi7mpTWlpsZJ3bu7U\niPLcy8niCKoGBz+X/Ti3LsqCSLzz1jkFYwVu+44u+R0s65W7WJ+9/5/sv+rQX9fc\nStUjpADH5f0Lp6oiCbv0TKJ0VHky1l6JnTzRmUKTf83uZKzPWDjAZbsCrttUKTSB\n1ql/R5J2e8h4XjuJEMPRtEvuPq0nbl3QpCJZVAUKEpsCAQOjIzAhMA8GA1UdEwEB\n/wQFMAMBAf8wDgYDVR0PAQH/BAQDAgEGMA0GCSqGSIb3DQEBBQUAA4IBAQCxtpVf\n/jxa5APoE07pgcN3n7yiz24f2Zhwl/AARDv8P3xlaIiOiAy0krOYwGFlSK5o0W2r\nbC1p6KpzLcXTnP+h9x9ZaKKMlbvzM6XyFNYf8vruf9CEEftAWRdkCepOlEy7/8IA\nMuKp12DYMLkpJbrqZjKipZUu1mq1F8JagjEQ5rr4bPbRHDkc0Hww4EyMMVFgriea\nJq/noMjDQ7diM6+YdYSNm3llD9diwG83Hjkh7hsgRQNYLh2wROkDlRSK1ryyscpr\n2P3aEGz6gspscr7LljIc8a3f5Hx0HgeX+4MdRgXpJTND6vAI8AO/aIOyrSjNgDdO\niRv2mvGSAANVg6vr\n-----END CERTIFICATE-----\n"
    ;
    uVar3 = 0x4da;
  }
  else {
    if (0x7f50e0 < iVar1) {
      if (((iVar1 == 0x7f50e1) || (iVar1 == 0x9540e1)) || (iVar1 == 0x9210e1)) {
LAB_001adafe:
        _AMAuthInstallCryptoRegisterKeysFromPEMBuffer(param_1,&cf_bb_monet_ticket_root,"",1);
        _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                  (param_1,&cf_bb_monet_rom_dbl,&_kMonetAttestationSblPrivateKey,1);
        _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                  (param_1,&cf_bb_monet_rom_dbl_attestation,
                   "-----BEGIN CERTIFICATE-----\nMIIDUDCCAjigAwIBAgIBAjANBgkqhkiG9w0BAQsFADBDMRkwFwYDVQQDExBFdXJl\na2EgUm9vdCBDQSA5MREwDwYDVQQKEwhNYXZlcmljazETMBEGA1UECBMKQ2FsaWZv\ncm5pYTAeFw0xMzA1MDcyMTQxMTlaFw0xNTA1MDcyMTQxMTlaMHIxIDAeBgNVBAMT\nF01BVi1TV0lEMC1Sb290Q0E5LUxvY2FsMSIwIAYDVQQLFBkwMSAwMDAwMDAwMDAw\nMDAwMDAwIFNXX0lEMRcwFQYDVQQLEw4wNyAwMDAxIFNIQTI1NjERMA8GA1UEChMI\nTWF2ZXJpY2swggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC5fXSRqSZZ\nGV70CudqGSMSIzDANwX8iMEiTpuvJJSnyjMBJk8EPSkPz6d5XOfX2kaI2LCMhYKp\n6A5JJiWNgXUzHTcP+p6bDQUHa44UPJ6FN5Q9PpkIs3zvfepmo51IgKjPgZjory0J\n+F6ZrlNUu1iHZaRoLJ5kHCQ1oJay+72oWx1i/3pxudmKP8qORVtvrD3JRheJNijO\nUzap1dXT70JeEh4MjXMo02KIoUeB8smZ4fCH98PNUiajugzIlpUL55iNi3yQ7zP1\nhDKEh7gLOM8NaLUBgkjBQh1osIz7eP7+K+61T6R26EYXuGaf1WnbWWx5cqZNPzRS\nhpt1geckHwfVAgMBAAGjIDAeMAwGA1UdEwEB/wQCMAAwDgYDVR0PAQH/BAQDAgTw\nMA0GCSqGSIb3DQEBCwUAA4IBAQA0qtV24+TKrK/xsn1kbFwB4ofs2UP7anSOzc38\ni4YaWPfNB6nWjSYzjIU/IujufNAdFKvixmxYfdIK/vpl1eLpAzEqDEtO1vX+Caos\nwbiGCId6pM+goEy91EDledQq8Bv8Ke+KaSF5MFh7HcnqywytScVcqxdzcFb7cr1f\nHenlk9FLc8tL3GbGk2eHWPfpKya9wXZwvEqcFMfh0fjZTXLGSgq9r6lH1zlf0zig\nyxqYAOYh5wTQj15/9KKfzU+VhtsXrJ+/0czC0kqGQHwYmjGRo/cBA/JCTXSMWBWn\nFlYMk7ZrrRQsPKmTFSOccxVp5iBSdXoAgKwpsXumiYUmY+wi\n-----END CERTIFICATE-----\n"
                   ,0x4b9);
        _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                  (param_1,&cf_bb_monet_rom_general_root,&_kMonetRootCA9Cert,0x4e2);
        _AMAuthInstallCryptoRegisterCertFromPEMBuffer
                  (param_1,&cf_bb_monet_ticket_leafcert,&_kMonetAttestationBBTicket,0x617);
        _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                  (param_1,&cf_bb_monet_ticket_leafcert_private,
                   &_kMonetAttestationBBTicketPrivateKey,1);
        goto LAB_001adba0;
      }
      goto LAB_001adbc3;
    }
    if (((iVar1 != 0x19f0e1) && (iVar1 != 0x1fe0e1)) && (iVar1 != 0x2af0e1)) goto LAB_001adbc3;
LAB_001ad979:
    _AMAuthInstallCryptoRegisterKeysFromECCBuffer
              (param_1,&cf_bb_monet_ticket_root,&_kMonetRootBBTicketMav20PrivateKey,1);
    _AMAuthInstallCryptoRegisterCertFromPEMBuffer
              (param_1,&cf_bb_monet_ticket_leafcert,
               "-----BEGIN CERTIFICATE-----\nMIICmTCCAh+gAwIBAgIIObN4PWiCyZUwCgYIKoZIzj0EAwMwSTElMCMGA1UEAwwc\nRXVyZWthIFNlY3VyZSBCb290IFJvb3QgQ0EgMjETMBEGA1UECgwKQXBwbGUgSW5j\nLjELMAkGA1UEBhMCVVMwHhcNMTgwNjIwMTkxNTE1WhcNMTgwNjIxMTkxMTQxWjBD\nMR8wHQYDVQQDDBZNQVYtTG9jYWwtUmV2Qy1GYWN0b3J5MRMwEQYDVQQKDApBcHBs\nZSBJbmMuMQswCQYDVQQGEwJVUzB2MBAGByqGSM49AgEGBSuBBAAiA2IABElVLuJg\nCQ2Xj0B7Rc70I0W/A0gM/l9cRUpqidy1ZAb/CSehI2GaKNZU7Y1NgmQ7oM6XEilz\nTYVpy6/tXoJu/zGw6rOF8fAIPRNV+C9cYvi89JfSasR0bNRbgKJtsK43zKOB2TCB\n1jAMBgNVHRMBAf8EAjAAMB8GA1UdIwQYMBaAFJhrqK+l31CPKfSFJz4lrp3Z3Bfs\nMB0GA1UdDgQWBBQl/Ci/cr1f9+q8u4zwhSFPYj8eJjAOBgNVHQ8BAf8EBAMCB4Aw\ndgYJKoZIhvdjZAYqAQH/BGYxZP+E6oWcUF0wWxYETUFOUDFT/4SalaBPCzAJFgRD\nRVBPAgEA/4aTveBoOjA4FgRib3BoBDB2Rwr9LGZCJRt1g3Z1CHiRYMi1EJotUHf4\n/WEfRcDiAzhAOHrfATNh7OQF5n6uvtUwCgYIKoZIzj0EAwMDaAAwZQIxAJYKuzPp\n60m7nJ6Dzs+l5R+hxgqNPCX8+3j3yuHzVWdZZCVISSfUmtQprdD+m7fbQAIwJEsL\n2kJxZWwNL1ZyDmp+KQxFTa9vCkNamhHDS9DP+y/4YcO4y1jA+0YvLERL8ijN\n-----END CERTIFICATE-----\n"
               ,0x3c1);
    _AMAuthInstallCryptoRegisterKeysFromECCBuffer
              (param_1,&cf_bb_monet_ticket_leafcert_private,&_kMonetBBTicketMav20PrivateKey,1);
    _AMAuthInstallCryptoRegisterKeysFromECCBuffer
              (param_1,&cf_bb_monet_rom_dbl,&_kMonetAttestationSBLMav20PrivateKey,1);
    _AMAuthInstallCryptoRegisterCertFromPEMBuffer
              (param_1,&cf_bb_monet_rom_dbl_attestation,
               "-----BEGIN CERTIFICATE-----\nMIICIDCCAaegAwIBAgIIRs5sfyqelh8wCgYIKoZIzj0EAwMwTzEjMCEGA1UEAwwa\nVGVzdCBFdXJla2EgU09DIFJvb3QgQ0EgMzUxEzARBgNVBAoMCkFwcGxlIEluYy4x\nEzARBgNVBAgMCkNhbGlmb3JuaWEwHhcNMTgwNTE1MjIxMjI4WhcNMTgwNTE2MjIx\nMjI4WjA/MSgwJgYDVQQDDB9UZXN0IEV1cmVrYSBTT0MgUm9vdCBDQSAzNSBMZWFm\nMRMwEQYDVQQKDApBcHBsZSBJbmMuMHYwEAYHKoZIzj0CAQYFK4EEACIDYgAE6w8j\nHopgIYFA2AIgfFMb7nJ/u+kiZLoa6+DrGy1Hq9RMQ4PaKugBZo1phJmVZBQylaw+\nt8bzSYTRX54ssE/wWZcGr6AxXHukWUbyEXTwfBrJ+WZrrgk9m4yO4CTM+X/3o2Aw\nXjAMBgNVHRMBAf8EAjAAMB8GA1UdIwQYMBaAFAxk7aveoHb8y7T0n723XUb1l68y\nMB0GA1UdDgQWBBTdXA+AlS+1l6tg3ZKC6nC4DuoOejAOBgNVHQ8BAf8EBAMCB4Aw\nCgYIKoZIzj0EAwMDZwAwZAIwNPaI+vLvTKfYhLdFh8/dLd77H/ffp7Tg1J+9kUK3\n2N2Is775fYno4lL8uyS3NswTAjBTQRgMgpjN1RWQMbY2/cUUIKVU3zYY97/k2Tg4\nlMribI5IpqA0f/kfAyqtW8MPpH0=\n-----END CERTIFICATE-----\n"
               ,799);
    pcVar4 = 
    "-----BEGIN CERTIFICATE-----\nMIICFzCCAZygAwIBAgIIFo4L83qPTfAwCgYIKoZIzj0EAwMwTzEjMCEGA1UEAwwa\nVGVzdCBFdXJla2EgU09DIFJvb3QgQ0EgMzUxEzARBgNVBAoMCkFwcGxlIEluYy4x\nEzARBgNVBAgMCkNhbGlmb3JuaWEwHhcNMTgwNTE1MjE1NTA4WhcNMzgwNTEwMjE1\nNTA4WjBPMSMwIQYDVQQDDBpUZXN0IEV1cmVrYSBTT0MgUm9vdCBDQSAzNTETMBEG\nA1UECgwKQXBwbGUgSW5jLjETMBEGA1UECAwKQ2FsaWZvcm5pYTB2MBAGByqGSM49\nAgEGBSuBBAAiA2IABHr0Ra9AWULVMOUkHo1hjBQe2NKt6lSr2cMxVdyj12cXMA7t\nQvZS1N4AcWI9JExr3NzQRnjvFoKQrOnxgeu/NVCTl+cmN6N9qM+QN6t6C5Y+S5wi\nanyl/eGGKa87AInHcKNFMEMwEgYDVR0TAQH/BAgwBgEB/wIBADAdBgNVHQ4EFgQU\nDGTtq96gdvzLtPSfvbddRvWXrzIwDgYDVR0PAQH/BAQDAgIEMAoGCCqGSM49BAMD\nA2kAMGYCMQD0lA/toGnX/oCc3Shp61E3mCZrLtA2E1g0vrBtgEzeRCMJgvnPrAZ+\nqcd5SQkbLpkCMQC/JeLDhqpmDtU7QB/n7NCxTK8siYWHTuwVRMiiTf0Zvzc0ow6H\nacwuMD9Uss2/BD0=\n-----END CERTIFICATE-----\n"
    ;
    uVar3 = 0x313;
  }
LAB_001ada16:
  _AMAuthInstallCryptoRegisterCertFromPEMBuffer(param_1,&cf_bb_monet_rom_general_root,pcVar4,uVar3);
LAB_001adba0:
  _AMAuthInstallLog(6,"AMAuthInstallMonetLocalRegisterKeys","monet local signing keys available");
  return 0;
}

