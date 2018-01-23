#include <cstddef>
// This file is auto-generated, DO NOT EDIT.

struct CTLogInfo {
  // The DER-encoded SubjectPublicKeyInfo for the log.
  const char* log_key;
  // The length, in bytes, of |log_key|.
  size_t log_key_length;
  // The user-friendly log name.
  // Note: This will not be translated.
  const char* log_name;
  // The HTTPS API endpoint for the log.
  // Note: Trailing slashes should be included.
  const char* log_url;
  // The DNS API endpoint for the log.
  // This is used as the parent domain for all queries about the log.
  // If empty, CT DNS queries are not supported for the log. This will prevent
  // retrieval of inclusion proofs over DNS for SCTs from the log.
  // https://github.com/google/certificate-transparency-rfcs/blob/master/dns/draft-ct-over-dns.md.
  const char* log_dns_domain;
};

// The set of all presently-qualifying CT logs.
// Google provides DNS frontends for all of the logs.
const CTLogInfo kCTLogList[] = {
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\xd7\xf4\xcc\x69\xb2\xe4\x0e"
     "\x90\xa3\x8a\xea\x5a\x70\x09\x4f\xef\x13\x62\xd0\x8d\x49\x60\xff\x1b"
     "\x40\x50\x07\x0c\x6d\x71\x86\xda\x25\x49\x8d\x65\xe1\x08\x0d\x47\x34"
     "\x6b\xbd\x27\xbc\x96\x21\x3e\x34\xf5\x87\x76\x31\xb1\x7f\x1d\xc9\x85"
     "\x3b\x0d\xf7\x1f\x3f\xe9",
     91,
     "Google 'Aviator' log",
     "https://ct.googleapis.com/aviator/",
     "aviator.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x4e\xd2\xbc\xbf\xb3\x08\x0a"
     "\xf7\xb9\xea\xa4\xc7\x1c\x38\x61\x04\xeb\x95\xe0\x89\x54\x68\x44\xb1"
     "\x66\xbc\x82\x7e\x4f\x50\x6c\x6f\x5c\xa3\xf0\xaa\x3e\xf4\xec\x80\xf0"
     "\xdb\x0a\x9a\x7a\xa0\x5b\x72\x00\x7c\x25\x0e\x19\xef\xaf\xb2\x62\x8d"
     "\x74\x43\xf4\x26\xf6\x14",
     91,
     "Google 'Icarus' log",
     "https://ct.googleapis.com/icarus/",
     "icarus.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x7d\xa8\x4b\x12\x29\x80\xa3"
     "\x3d\xad\xd3\x5a\x77\xb8\xcc\xe2\x88\xb3\xa5\xfd\xf1\xd3\x0c\xcd\x18"
     "\x0c\xe8\x41\x46\xe8\x81\x01\x1b\x15\xe1\x4b\xf1\x1b\x62\xdd\x36\x0a"
     "\x08\x18\xba\xed\x0b\x35\x84\xd0\x9e\x40\x3c\x2d\x9e\x9b\x82\x65\xbd"
     "\x1f\x04\x10\x41\x4c\xa0",
     91,
     "Google 'Pilot' log",
     "https://ct.googleapis.com/pilot/",
     "pilot.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x20\x5b\x18\xc8\x3c\xc1\x8b"
     "\xb3\x31\x08\x00\xbf\xa0\x90\x57\x2b\xb7\x47\x8c\x6f\xb5\x68\xb0\x8e"
     "\x90\x78\xe9\xa0\x73\xea\x4f\x28\x21\x2e\x9c\xc0\xf4\x16\x1b\xaa\xf9"
     "\xd5\xd7\xa9\x80\xc3\x4e\x2f\x52\x3c\x98\x01\x25\x46\x24\x25\x28\x23"
     "\x77\x2d\x05\xc2\x40\x7a",
     91,
     "Google 'Rocketeer' log",
     "https://ct.googleapis.com/rocketeer/",
     "rocketeer.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x12\x6c\x86\x0e\xf6\x17\xb1"
     "\x12\x6c\x37\x25\xd2\xad\x87\x3d\x0e\x31\xec\x21\xad\xb1\xcd\xbe\x14"
     "\x47\xb6\x71\x56\x85\x7a\x9a\xb7\x3d\x89\x90\x7b\xc6\x32\x3a\xf8\xda"
     "\xce\x8b\x01\xfe\x3f\xfc\x71\x91\x19\x8e\x14\x6e\x89\x7a\x5d\xb4\xab"
     "\x7e\xe1\x4e\x1e\x7c\xac",
     91,
     "Google 'Skydiver' log",
     "https://ct.googleapis.com/skydiver/",
     "skydiver.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x02\x46\xc5\xbe\x1b\xbb\x82"
     "\x40\x16\xe8\xc1\xd2\xac\x19\x69\x13\x59\xf8\xf8\x70\x85\x46\x40\xb9"
     "\x38\xb0\x23\x82\xa8\x64\x4c\x7f\xbf\xbb\x34\x9f\x4a\x5f\x28\x8a\xcf"
     "\x19\xc4\x00\xf6\x36\x06\x93\x65\xed\x4c\xf5\xa9\x21\x62\x5a\xd8\x91"
     "\xeb\x38\x24\x40\xac\xe8",
     91,
     "DigiCert Log Server",
     "https://ct1.digicert-ct.com/log/",
     "digicert.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\xcc\x5d\x39\x2f\x66\xb8\x4c"
     "\x7f\xc1\x2e\x03\xa1\x34\xa3\xe8\x8a\x86\x02\xae\x4a\x11\xc6\xf7\x26"
     "\x6a\x37\x9b\xf0\x38\xf8\x5d\x09\x8d\x63\xe8\x31\x6b\x86\x66\xcf\x79"
     "\xb3\x25\x3c\x1e\xdf\x78\xb4\xa8\xc5\x69\xfa\xb7\xf0\x82\x79\x62\x43"
     "\xf6\xcc\xfe\x81\x66\x84",
     91,
     "DigiCert Log Server 2",
     "https://ct2.digicert-ct.com/log/",
     "digicert2.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x96\xea\xac\x1c\x46\x0c\x1b"
     "\x55\xdc\x0d\xfc\xb5\x94\x27\x46\x57\x42\x70\x3a\x69\x18\xe2\xbf\x3b"
     "\xc4\xdb\xab\xa0\xf4\xb6\x6c\xc0\x53\x3f\x4d\x42\x10\x33\xf0\x58\x97"
     "\x8f\x6b\xbe\x72\xf4\x2a\xec\x1c\x42\xaa\x03\x2f\x1a\x7e\x28\x35\x76"
     "\x99\x08\x3d\x21\x14\x86",
     91,
     "Symantec log",
     "https://ct.ws.symantec.com/",
     "symantec.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\xea\x95\x9e\x02\xff\xee\xf1"
     "\x33\x6d\x4b\x87\xbc\xcd\xfd\x19\x17\x62\xff\x94\xd3\xd0\x59\x07\x3f"
     "\x02\x2d\x1c\x90\xfe\xc8\x47\x30\x3b\xf1\xdd\x0d\xb8\x11\x0c\x5d\x1d"
     "\x86\xdd\xab\xd3\x2b\x46\x66\xfb\x6e\x65\xb7\x3b\xfd\x59\x68\xac\xdf"
     "\xa6\xf8\xce\xd2\x18\x4d",
     91,
     "Symantec 'Vega' log",
     "https://vega.ws.symantec.com/",
     "symantec-vega.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\xa3\x02\x64\x84\x22\xbb\x25"
     "\xec\x0d\xe3\xbc\xc2\xc9\x89\x7d\xdd\x45\xd0\xee\xe6\x15\x85\x8f\xd9"
     "\xe7\x17\x1b\x13\x80\xea\xed\xb2\x85\x37\xad\x6a\xc5\xd8\x25\x9d\xfa"
     "\xf4\xb4\xf3\x6e\x16\x28\x25\x37\xea\xa3\x37\x64\xb2\xc7\x0b\xfd\x51"
     "\xe5\xc1\x05\xf4\x0e\xb5",
     91,
     "Symantec 'Sirius' log",
     "https://sirius.ws.symantec.com/",
     "symantec-sirius.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\xcc\x11\x88\x7b\x2d\x66\xcb"
     "\xae\x8f\x4d\x30\x66\x27\x19\x25\x22\x93\x21\x46\xb4\x2f\x01\xd3\xc6"
     "\xf9\x2b\xd5\xc8\xba\x73\x9b\x06\xa2\xf0\x8a\x02\x9c\xd0\x6b\x46\x18"
     "\x30\x85\xba\xe9\x24\x8b\x0e\xd1\x5b\x70\x28\x0c\x7e\xf1\x3a\x45\x7f"
     "\x5a\xf3\x82\x42\x60\x31",
     91,
     "WoSign log",
     "https://ctlog.wosign.com/",
     "wosign1.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x8e\x27\x27\x7a\xb6\x55\x09"
     "\x74\xeb\x6c\x4b\x94\x84\x65\xbc\xe4\x15\xf1\xea\x5a\xd8\x7c\x0e\x37"
     "\xce\xba\x3f\x6c\x09\xda\xe7\x29\x96\xd3\x45\x50\x6f\xde\x1e\xb4\x1c"
     "\xd2\x83\x88\xff\x29\x2f\xce\xa9\xff\xdf\x34\xde\x75\x0f\xc0\xcc\x18"
     "\x0d\x94\x2e\xfc\x37\x01",
     91,
     "Venafi Gen2 CT log",
     "https://ctlog-gen2.api.venafi.com/",
     "venafi2.ct.googleapis.com"},
    {"\x30\x82\x01\x22\x30\x0d\x06\x09\x2a\x86\x48\x86\xf7\x0d\x01\x01\x01"
     "\x05\x00\x03\x82\x01\x0f\x00\x30\x82\x01\x0a\x02\x82\x01\x01\x00\xbf"
     "\xb5\x08\x61\x9a\x29\x32\x04\xd3\x25\x63\xe9\xd8\x85\xe1\x86\xe0\x1f"
     "\xd6\x5e\x9a\xf7\x33\x3b\x80\x1b\xe7\xb6\x3e\x5f\x2d\xa1\x66\xf6\x95"
     "\x4a\x84\xa6\x21\x56\x79\xe8\xf7\x85\xee\x5d\xe3\x7c\x12\xc0\xe0\x89"
     "\x22\x09\x22\x3e\xba\x16\x95\x06\xbd\xa8\xb9\xb1\xa9\xb2\x7a\xd6\x61"
     "\x2e\x87\x11\xb9\x78\x40\x89\x75\xdb\x0c\xdc\x90\xe0\xa4\x79\xd6\xd5"
     "\x5e\x6e\xd1\x2a\xdb\x34\xf4\x99\x3f\x65\x89\x3b\x46\xc2\x29\x2c\x15"
     "\x07\x1c\xc9\x4b\x1a\x54\xf8\x6c\x1e\xaf\x60\x27\x62\x0a\x65\xd5\x9a"
     "\xb9\x50\x36\x16\x6e\x71\xf6\x1f\x01\xf7\x12\xa7\xfc\xbf\xf6\x21\xa3"
     "\x29\x90\x86\x2d\x77\xde\xbb\x4c\xd4\xcf\xfd\xd2\xcf\x82\x2c\x4d\xd4"
     "\xf2\xc2\x2d\xac\xa9\xbe\xea\xc3\x19\x25\x43\xb2\xe5\x9a\x6c\x0d\xc5"
     "\x1c\xa5\x8b\xf7\x3f\x30\xaf\xb9\x01\x91\xb7\x69\x12\x12\xe5\x83\x61"
     "\xfe\x34\x00\xbe\xf6\x71\x8a\xc7\xeb\x50\x92\xe8\x59\xfe\x15\x91\xeb"
     "\x96\x97\xf8\x23\x54\x3f\x2d\x8e\x07\xdf\xee\xda\xb3\x4f\xc8\x3c\x9d"
     "\x6f\xdf\x3c\x2c\x43\x57\xa1\x47\x0c\x91\x04\xf4\x75\x4d\xda\x89\x81"
     "\xa4\x14\x06\x34\xb9\x98\xc3\xda\xf1\xfd\xed\x33\x36\xd3\x16\x2d\x35"
     "\x02\x03\x01\x00\x01",
     294,
     "CNNIC CT log",
     "https://ctserver.cnnic.cn/",
     "cnnic.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x48\xf3\x59\xf3\xf6\x05\x18"
     "\xd3\xdb\xb2\xed\x46\x7e\xcf\xc8\x11\xb5\x57\xb1\xa8\xd6\x4c\xe6\x9f"
     "\xb7\x4a\x1a\x14\x86\x43\xa9\x48\xb0\xcb\x5a\x3f\x3c\x4a\xca\xdf\xc4"
     "\x82\x14\x55\x9a\xf8\xf7\x8e\x40\x55\xdc\xf4\xd2\xaf\xea\x75\x74\xfb"
     "\x4e\x7f\x60\x86\x2e\x51",
     91,
     "StartCom log",
     "https://ct.startssl.com/",
     "startcom1.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\xf2\x6f\xd2\x89\x0f\x3f\xc5"
     "\xf8\x87\x1e\xab\x65\xb3\xd9\xbb\x17\x23\x8c\x06\x0e\x09\x55\x96\x3d"
     "\x0a\x08\xa2\xc5\x71\xb3\xd1\xa9\x2f\x28\x3e\x83\x10\xbf\x12\xd0\x44"
     "\x66\x15\xef\x54\xe1\x98\x80\xd0\xce\x24\x6d\x3e\x67\x9a\xe9\x37\x23"
     "\xce\x52\x93\x86\xda\x80",
     91,
     "Comodo 'Sabre' CT log",
     "https://sabre.ct.comodo.com/",
     "comodo-sabre.ct.googleapis.com"},
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\xef\xe4\x7d\x74\x2e\x15\x15"
     "\xb6\xe9\xbb\x23\x8b\xfb\x2c\xb5\xe1\xc7\x80\x98\x47\xfb\x40\x69\x68"
     "\xfc\x49\xad\x61\x4e\x83\x47\x3c\x1a\xb7\x8d\xdf\xff\x7b\x30\xb4\xba"
     "\xff\x2f\xcb\xa0\x14\xe3\xad\xd5\x85\x3f\x44\x59\x8c\x8c\x60\x8b\xd7"
     "\xb8\xb1\xbf\xae\x8c\x67",
     91,
     "Comodo 'Mammoth' CT log",
     "https://mammoth.ct.comodo.com/",
     "comodo-mammoth.ct.googleapis.com"}
};

// The list is sorted.
const char kGoogleLogIDs[][33] = {
    "\x29\x3c\x51\x96\x54\xc8\x39\x65\xba\xaa\x50\xfc\x58\x07\xd4\xb7\x6f"
    "\xbf\x58\x7a\x29\x72\xdc\xa4\xc3\x0c\xf4\xe5\x45\x47\xf4\x78",
    "\x68\xf6\x98\xf8\x1f\x64\x82\xbe\x3a\x8c\xee\xb9\x28\x1d\x4c\xfc\x71"
    "\x51\x5d\x67\x93\xd4\x44\xd1\x0a\x67\xac\xbb\x4f\x4f\xfb\xc4",
    "\xa4\xb9\x09\x90\xb4\x18\x58\x14\x87\xbb\x13\xa2\xcc\x67\x70\x0a\x3c"
    "\x35\x98\x04\xf9\x1b\xdf\xb8\xe3\x77\xcd\x0e\xc8\x0d\xdc\x10",
    "\xbb\xd9\xdf\xbc\x1f\x8a\x71\xb5\x93\x94\x23\x97\xaa\x92\x7b\x47\x38"
    "\x57\x95\x0a\xab\x52\xe8\x1a\x90\x96\x64\x36\x8e\x1e\xd1\x85",
    "\xee\x4b\xbd\xb7\x75\xce\x60\xba\xe1\x42\x69\x1f\xab\xe1\x9e\x66\xa3"
    "\x0f\x7e\x5f\xb0\x72\xd8\x83\x00\xc4\x7b\x89\x7a\xa8\xfd\xcb"};

// Information related to previously-qualified, but now disqualified,
// CT logs.
struct DisqualifiedCTLogInfo {
  // The ID of the log (the SHA-256 hash of |log_info.log_key|.
  const char log_id[33];
  const CTLogInfo log_info;
  // The offset from the Unix Epoch of when the log was disqualified.
  // SCTs embedded in pre-certificates after this date should not count
  // towards any uniqueness/freshness requirements.
  const base::TimeDelta disqualification_date;
};

// The set of all disqualified logs, sorted by |log_id|.
const DisqualifiedCTLogInfo kDisqualifiedCTLogList[] = {
    {"\x74\x61\xb4\xa0\x9c\xfb\x3d\x41\xd7\x51\x59\x57\x5b\x2e\x76\x49\xa4"
     "\x45\xa8\xd2\x77\x09\xb0\xcc\x56\x4a\x64\x82\xb7\xeb\x41\xa3",
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x27\x64\x39\x0c\x2d\xdc\x50"
     "\x18\xf8\x21\x00\xa2\x0e\xed\x2c\xea\x3e\x75\xba\x9f\x93\x64\x09\x00"
     "\x11\xc4\x11\x17\xab\x5c\xcf\x0f\x74\xac\xb5\x97\x90\x93\x00\x5b\xb8"
     "\xeb\xf7\x27\x3d\xd9\xb2\x0a\x81\x5f\x2f\x0d\x75\x38\x94\x37\x99\x1e"
     "\xf6\x07\x76\xe0\xee\xbe",
     91,
     "Izenpe log",
     "https://ct.izenpe.com/",
     "izenpe1.ct.googleapis.com"},
     base::TimeDelta::FromSeconds(1464566400)},
    {"\xac\x3b\x9a\xed\x7f\xa9\x67\x47\x57\x15\x9e\x6d\x7d\x57\x56\x72\xf9"
     "\xd9\x81\x00\x94\x1e\x9b\xde\xff\xec\xa1\x31\x3b\x75\x78\x2d",
    {"\x30\x82\x01\x22\x30\x0d\x06\x09\x2a\x86\x48\x86\xf7\x0d\x01\x01\x01"
     "\x05\x00\x03\x82\x01\x0f\x00\x30\x82\x01\x0a\x02\x82\x01\x01\x00\xa2"
     "\x5a\x48\x1f\x17\x52\x95\x35\xcb\xa3\x5b\x3a\x1f\x53\x82\x76\x94\xa3"
     "\xff\x80\xf2\x1c\x37\x3c\xc0\xb1\xbd\xc1\x59\x8b\xab\x2d\x65\x93\xd7"
     "\xf3\xe0\x04\xd5\x9a\x6f\xbf\xd6\x23\x76\x36\x4f\x23\x99\xcb\x54\x28"
     "\xad\x8c\x15\x4b\x65\x59\x76\x41\x4a\x9c\xa6\xf7\xb3\x3b\x7e\xb1\xa5"
     "\x49\xa4\x17\x51\x6c\x80\xdc\x2a\x90\x50\x4b\x88\x24\xe9\xa5\x12\x32"
     "\x93\x04\x48\x90\x02\xfa\x5f\x0e\x30\x87\x8e\x55\x76\x05\xee\x2a\x4c"
     "\xce\xa3\x6a\x69\x09\x6e\x25\xad\x82\x76\x0f\x84\x92\xfa\x38\xd6\x86"
     "\x4e\x24\x8f\x9b\xb0\x72\xcb\x9e\xe2\x6b\x3f\xe1\x6d\xc9\x25\x75\x23"
     "\x88\xa1\x18\x58\x06\x23\x33\x78\xda\x00\xd0\x38\x91\x67\xd2\xa6\x7d"
     "\x27\x97\x67\x5a\xc1\xf3\x2f\x17\xe6\xea\xd2\x5b\xe8\x81\xcd\xfd\x92"
     "\x68\xe7\xf3\x06\xf0\xe9\x72\x84\xee\x01\xa5\xb1\xd8\x33\xda\xce\x83"
     "\xa5\xdb\xc7\xcf\xd6\x16\x7e\x90\x75\x18\xbf\x16\xdc\x32\x3b\x6d\x8d"
     "\xab\x82\x17\x1f\x89\x20\x8d\x1d\x9a\xe6\x4d\x23\x08\xdf\x78\x6f\xc6"
     "\x05\xbf\x5f\xae\x94\x97\xdb\x5f\x64\xd4\xee\x16\x8b\xa3\x84\x6c\x71"
     "\x2b\xf1\xab\x7f\x5d\x0d\x32\xee\x04\xe2\x90\xec\x41\x9f\xfb\x39\xc1"
     "\x02\x03\x01\x00\x01",
     294,
     "Venafi log",
     "https://ctlog.api.venafi.com/",
     "venafi.ct.googleapis.com"},
     base::TimeDelta::FromSeconds(1488307346)},
    {"\xcd\xb5\x17\x9b\x7f\xc1\xc0\x46\xfe\xea\x31\x13\x6a\x3f\x8f\x00\x2e"
     "\x61\x82\xfa\xf8\x89\x6f\xec\xc8\xb2\xf5\xb5\xab\x60\x49\x00",
    {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
     "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x0b\x23\xcb\x85\x62\x98\x61"
     "\x48\x04\x73\xeb\x54\x5d\xf3\xd0\x07\x8c\x2d\x19\x2d\x8c\x36\xf5\xeb"
     "\x8f\x01\x42\x0a\x7c\x98\x26\x27\xc1\xb5\xdd\x92\x93\xb0\xae\xf8\x9b"
     "\x3d\x0c\xd8\x4c\x4e\x1d\xf9\x15\xfb\x47\x68\x7b\xba\x66\xb7\x25\x9c"
     "\xd0\x4a\xc2\x66\xdb\x48",
     91,
     "Certly.IO log",
     "https://log.certly.io/",
     "certly.ct.googleapis.com"},
     base::TimeDelta::FromSeconds(1460678400)}
};
