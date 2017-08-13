[%bs.raw {|require('./index.css')|}];

external register_service_worker : unit => unit = "" [@@bs.module "./registerServiceWorker"];

let renderForRoute element => ReactDOMRe.renderToElementWithId element "index";

let router = DirectorRe.makeRouter {
  "/": fun () => renderForRoute <Home />,
  "/user": fun () => renderForRoute <User />
};

DirectorRe.init router "/";
ReactDOMRe.renderToElementWithId <Home /> "root";
