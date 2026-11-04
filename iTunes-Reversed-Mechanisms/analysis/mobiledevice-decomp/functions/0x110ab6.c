// rea decompile_all
// name: __ssl_strerror
// address: 0x110ab6
// body: available
// range: 0x110ab6-0x110c1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __ssl_strerror(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar2 = _SSL_get_error();
  puVar1 = PTR____stderrp_004412c0;
  switch(uVar2) {
  case 0:
    pcVar7 = "SSL_ERROR_NONE";
    break;
  case 1:
    uVar3 = _ERR_peek_error();
    if (uVar3 == 0) {
      pcVar7 = "SSL_ERROR_SSL unknown error";
      break;
    }
    pcVar5 = _ERR_error_string(uVar3,(char *)0x0);
    pcVar6 = "SSL_ERROR_SSL (%s)";
    goto LAB_00110bf4;
  case 2:
    pcVar7 = "SSL_ERROR_WANT_READ";
    break;
  case 3:
    pcVar7 = "SSL_ERROR_WANT_WRITE";
    break;
  case 4:
    pcVar7 = "SSL_ERROR_WANT_X509_LOOKUP";
    break;
  case 5:
    uVar3 = _ERR_peek_error();
    if (param_2 == 0 && uVar3 == 0) {
      pcVar7 = "SSL_ERROR_SYSCALL (Early EOF reached)";
      break;
    }
    if (param_2 == -1 && uVar3 == 0) {
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      pcVar6 = "SSL_ERROR_SYSCALL errno (%s)";
    }
    else {
      if (uVar3 == 0) {
        pcVar7 = "SSL_ERROR_SYSCALL (WTFERROR)";
        break;
      }
      pcVar5 = _ERR_error_string(uVar3,(char *)0x0);
      pcVar6 = "SSL_ERROR_SYSCALL internal (%s)";
    }
LAB_00110bf4:
    pcVar7 = &__ssl_strerror_buffer;
    _snprintf(&__ssl_strerror_buffer,200,pcVar6,pcVar5);
    break;
  case 6:
    pcVar7 = "SSL_ERROR_ZERO_RETURN";
    break;
  case 7:
    pcVar7 = "SSL_ERROR_WANT_CONNECT";
    break;
  case 8:
    pcVar7 = "SSL_ERROR_WANT_ACCEPT";
    break;
  default:
    _ERR_print_errors_fp(*(FILE **)PTR____stderrp_004412c0);
    _fputc(10,*(FILE **)puVar1);
    pcVar7 = "Unknown SSL error type";
  }
  _ERR_clear_error();
  return pcVar7;
}

