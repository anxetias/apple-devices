// rea decompile_all
// name: _parse_serial_string
// address: 0x19d954
// body: available
// range: 0x19d954-0x19dc08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_parse_serial_string(char *param_1,char *param_2,byte *param_3,long param_4,long *param_5)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  bool bVar7;
  byte local_32;
  byte local_31;
  
  pcVar2 = _strstr(param_1,param_2);
  if (pcVar2 == (char *)0x0) {
    if (_inRestore == '\x01') {
      pcVar2 = "Cannot find start_of_needle";
LAB_0019d9b2:
      _puts(pcVar2);
      return 0x1e;
    }
    pcVar2 = "Cannot find start_of_needle\n";
  }
  else {
    pcVar2 = _strchr(pcVar2,0x3a);
    if (pcVar2 != (char *)0x0) {
      pcVar6 = pcVar2 + 1;
      pcVar3 = _strchr(pcVar6,0x20);
      if (pcVar3 == (char *)0x0) {
        uVar5 = _strlen(pcVar6);
      }
      else {
        uVar5 = (long)pcVar3 - (long)pcVar6;
      }
      if ((uVar5 & 1) == 0) {
        lVar4 = 0;
      }
      else {
        iVar1 = _sscanf(pcVar6,"%1hhx",&local_32);
        if (iVar1 != 1) {
          if (_inRestore == '\x01') {
            _puts("Reading of start_of_buffer failed");
          }
          else {
            _uarpLogError(3,"Reading of start_of_buffer failed\n");
          }
        }
        iVar1 = _sscanf(pcVar6,"%1hhx",&local_32);
        if (iVar1 != 1) {
          return 0x36;
        }
        *param_3 = local_32;
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
        pcVar6 = pcVar2 + 2;
        uVar5 = uVar5 - 1;
        lVar4 = 1;
      }
      while( true ) {
        if (uVar5 == 0) {
          *param_5 = lVar4;
          return 0;
        }
        iVar1 = _sscanf(pcVar6,"%2hhx",&local_31);
        if (iVar1 != 1) {
          if (_inRestore == '\x01') {
            _printf("Reading bytes failed, nibbles_in_field=0x%zX, buffer=%p, *buffer=0x%hhX, buffer_size=0x%zX, count=0x%zX, start_of_buf=%s\n"
                    ,uVar5,param_3,(ulong)*param_3,param_4,lVar4,pcVar6);
          }
          else {
            _uarpLogError(3,
                          "Reading bytes failed, nibbles_in_field=0x%zX, buffer=%p, *buffer=0x%hhX, buffer_size=0x%zX, count=0x%zX, start_of_buf=%s\n"
                          ,uVar5,param_3,(ulong)*param_3,param_4,lVar4,pcVar6);
          }
        }
        iVar1 = _sscanf(pcVar6,"%2hhx",&local_31);
        if (iVar1 != 1) break;
        if (param_3 == (byte *)0x0) {
          if (_inRestore == '\x01') {
            _printf("Buffer size = 0! ");
          }
          else {
            _uarpLogError(3,"Buffer size = 0! ");
          }
          if (_inRestore == '\x01') {
            _printf("nibbles_in_field=0x%zX, buffer=%p, *buffer=0x%hhX, buffer_size=0x%zX, count=0x%zX, start_of_buf=%s\n"
                    ,uVar5,0,0,param_4,lVar4,pcVar6);
          }
          else {
            _uarpLogError(3,
                          "nibbles_in_field=0x%zX, buffer=%p, *buffer=0x%hhX, buffer_size=0x%zX, count=0x%zX, start_of_buf=%s\n"
                          ,uVar5,0,0,param_4,lVar4,pcVar6);
          }
        }
        bVar7 = param_4 == 0;
        param_4 = param_4 + -1;
        if (bVar7) {
          return 0x27;
        }
        *param_3 = local_31;
        param_3 = param_3 + 1;
        lVar4 = lVar4 + 1;
        pcVar6 = pcVar6 + 2;
        uVar5 = uVar5 - 2;
      }
      return 0x36;
    }
    if (_inRestore == '\x01') {
      pcVar2 = "Cannot find start of buffer";
      goto LAB_0019d9b2;
    }
    pcVar2 = "Cannot find start of buffer\n";
  }
  _uarpLogError(3,pcVar2);
  return 0x1e;
}

