// rea decompile_all
// name: _AMAuthInstallRembrandtLocalRegisterKeys
// address: 0x1b20fb
// body: available
// range: 0x1b20fb-0x1b2271 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallRembrandtLocalRegisterKeys(long param_1)

{
  undefined *puVar1;
  
  switch(*(undefined4 *)(*(long *)(param_1 + 0x30) + 4)) {
  case 0x5e:
  case 0x68:
    _AMAuthInstallCryptoRegisterKeysFromECCBuffer
              (param_1,&cf_bb_rembrandt_ticket_root_private,
               &_kRembrandtTicketRootPrivateKey_ice18_EC,1);
    _AMAuthInstallCryptoRegisterKeysFromECCBuffer
              (param_1,&cf_bb_rembrandt_ticket_root_public,
               "-----BEGIN PUBLIC KEY-----\nMHYwEAYHKoZIzj0CAQYFK4EEACIDYgAEsQr5XSh28PixXTooJnTOrvpOM1U4LfVo\nR0u1UzrzbZxUAZ81Z8q5gyvxhEqXXfsg0UTBsG0pep0CFW4R4jovZXhOUklaIVcx\nzHyfcsqmgJiOKGVPLyYTsJDEN2n72z4O\n-----END PUBLIC KEY-----\n"
               ,0xd8);
    _AMAuthInstallCryptoRegisterKeysFromECCBuffer
              (param_1,&cf_bb_rembrandt_gold_leaf_private,&_kGoldLeafPrivateKey_ice18_EC,1);
    _AMAuthInstallCryptoRegisterKeysFromECCBuffer
              (param_1,&cf_bb_rembrandt_gold_leaf_public,
               "-----BEGIN PUBLIC KEY-----\nMHYwEAYHKoZIzj0CAQYFK4EEACIDYgAEmAZsciyBvpxNQ6LsaeglCOej77U6KyHL\ntDReQoKq06iSQQaX2LLmXXYZ68prHwNAWFkLnB5rRWocNrYakSNs8PQTuuE7Qjdq\nkYbAYIjW8zeeBnaQeqeJEJfCZL6P0M/D\n-----END PUBLIC KEY-----\n"
               ,0xd8);
    _AMAuthInstallCryptoRegisterKeysFromECCBuffer
              (param_1,&cf_bb_rembrandt_bbticket_private,&_kRembrandtBBTicketKey_EC,1);
    _AMAuthInstallCryptoRegisterKeysFromECCBuffer
              (param_1,&cf_bb_rembrandt_bbticket_public,
               "-----BEGIN PUBLIC KEY-----\nMHYwEAYHKoZIzj0CAQYFK4EEACIDYgAEdlJIiHNRkmKtUo0ujeiri1icSjG70jMm\nLPHkrWjCl+C5E4uOHaNXEXk7dMXIZ+OmKHIFDsooX/R1nTQlBBnuUnzMw5Jnw/Pz\n44K8HtbT+DunXcIZ2h7AdcuNupmxw5ss\n-----END PUBLIC KEY-----\n"
               ,0xd8);
    goto LAB_001b222c;
  default:
    _AMAuthInstallLog(3,"AMAuthInstallRembrandtLocalRegisterKeys","unknown chipID");
    return 99;
  case 0x60:
    _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
              (param_1,&cf_bb_rembrandt_gold_leaf,&_kGoldLeafPrivateKey,1);
    puVar1 = &_kRembrandtTicketRootPrivateKey;
    break;
  case 0x65:
  case 0x67:
    _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
              (param_1,&cf_bb_rembrandt_gold_leaf,&_kGoldLeafPrivateKey_x509,1);
    puVar1 = &_kRembrandtTicketRootPrivateKey_x509;
  }
  _AMAuthInstallCryptoRegisterKeysFromPEMBuffer(param_1,&cf_bb_rembrandt_ticket_root,puVar1,1);
LAB_001b222c:
  _AMAuthInstallLog(6,"AMAuthInstallRembrandtLocalRegisterKeys",
                    "rembrandt local signing keys available");
  return 0;
}

