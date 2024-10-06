
import pyqrcode
import png

from pyqrcode import QRCode

s = "9382305692"

url = pyqrcode.create(s)

url.png("myqr.png", scale=6)